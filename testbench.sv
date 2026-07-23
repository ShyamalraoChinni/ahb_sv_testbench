
interface ahb_if;

logic clk;
logic [31:0] haddr;
logic [31:0] hwdata;
logic [2:0] hsize;
logic [2:0] hburst;
logic [1:0] hresp;
logic [1:0] htrans;
logic [31:0] hrdata;
logic hresetn;
logic hsel;
logic hwrite;
logic hready;

logic [31:0] next_addr;

endinterface

///////////////////////////////////////////////

class transaction;

    rand bit [4:0] ulen; ///to specify length of INCREMENTING UNSPECIFIED BUS LENGTH
    rand bit [31:0] haddr;
    rand bit [31:0] hwdata;
    rand bit [2:0] hsize;
    rand bit [2:0] hburst;

    bit hresetn;
    rand bit hwrite;
    bit [1:0] htrans;
    bit [1:0] hresp;
    bit hready;
    bit [31:0] hrdata;


  /* constraint write_c { 
      hwrite dist {1:/ 50, 0:/ 50};
        }

 constraint ulen_c {
        ulen == 5;
    }

   constraint burst_c {
        hburst == 011;
    }

    constraint addr_c {
        haddr == 15;
    }*/
constraint addr_c { haddr inside {[0:255]}; }   // keep within memory size
    constraint ulen_c { ulen inside {[1:16]}; }     // allow variable burst lengths
    constraint hsize_c { hsize inside {3'b000, 3'b001, 3'b010}; }
    constraint hburst_c { hburst inside {3'b000,3'b001,3'b010,3'b011,
                                         3'b100,3'b101,3'b110,3'b111}; }

    constraint write_c { hwrite dist {1:/2, 0:/2}; }

    function transaction copy();   //use deep copy to send the data
        copy = new();
        copy.hwdata = this.hwdata;
        copy.haddr = this.haddr; 
        copy.hsize = this.hsize;
        copy.hburst = this.hburst;
        copy.hwrite = this.hwrite;
        copy.htrans = this.htrans;
        copy.hresp = this.hresp;
        copy.hready = this.hready;
        copy.hrdata = this.hrdata;
        copy.ulen = this.ulen;

    endfunction 

endclass

//////////////////////////////////////////////////////

class generator;

    transaction tr;
    mailbox #(transaction) mbxgd;
    mailbox #(bit [4:0]) mbxgm; // used to specify the length of the incr burst to the monitor

    event done;
    event drvnext;
    //event sconext;
  
    int count = 0;

    function new(mailbox #(transaction) mbxgd, mailbox #(bit [4:0]) mbxgm);
        this.mbxgd = mbxgd;
        this.mbxgm = mbxgm;
        tr = new();
    endfunction 

    task run();

    repeat(count) begin 
        assert(tr.randomize()) else $error("randomization failed");

        $display("GEN: data send to driver");
        mbxgd.put(tr.copy);
        mbxgm.put(tr.ulen);

        @(drvnext);
        //@(sconext);
      $display("GEN: Transaction -> addr=%0d, hburst=%0b, hsize=%0b, hwrite=%0b, ulen=%0d, hwdata=%0d",
          tr.haddr, tr.hburst, tr.hsize, tr.hwrite, tr.ulen, tr.hwdata);

    end
    ->done;
    endtask 

endclass


/////////////////////////
//driver class
//////////////////////////////
class driver;

    transaction tr;
    virtual ahb_if aif;
    mailbox #(transaction) mbxgd;
    
    event drvnext;

    function new(mailbox #(transaction) mbxgd);
        this.mbxgd = mbxgd;
    endfunction 

    task reset();
        aif.hresetn <= 1'b0;
        aif.hwrite <= 0;
        aif.haddr <= 0;
        aif.hwdata <= 0;
        aif.hsel <= 0;
        aif.htrans <= 0;
        aif.hburst <= 0;
        aif.hsize <= 0;

        repeat(10) @(posedge aif.clk);
        aif.hresetn <= 1'b1;
        $display("DRV: Reset done");

    endtask

    //////////////////////////single transfer write

    task single_tr_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b000;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;

        @(posedge aif.hready);
        @(posedge aif.clk);

        ->drvnext;
        $display("DRV: single transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);

    endtask

    ////////////////////////////////////single read tranfer

    task single_tr_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b000;

        aif.hwrite <= 1'b0;
        aif.hsel <= 1'b1; 

        aif.hwdata <= 0;
      
      	tr.hrdata <= aif.hrdata;
      
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;

        @(posedge aif.hready);
        @(posedge aif.clk);

        ->drvnext;
        $display("DRV: single read transafer write addr %0d, data %0d", tr.haddr, aif.hrdata);

    endtask


    ///////////////////////////unspec length write 

    task unspec_len_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b001;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
        $display("DRV: UNSPEC lentgh transafer write addr %0d, data %0d", aif.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(tr.ulen - 1) begin 
            aif.hwdata <= $urandom_range(1,50);
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
            $display("DRV: single transafer write addr %0d, data %0d", aif.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


//////////////////////unspec length read

    task unspec_len_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b001;

        aif.hwrite <= 1'b0;
     	aif.hsel <= 1'b1; 
      
      	tr.hrdata <= aif.hrdata;


      aif.hwdata <= 0;
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
        $display("DRV: UNSPEC lentgh transafer read addr %0d, data %0d", aif.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(tr.ulen - 1) begin 
             tr.hrdata <= aif.hrdata;

            aif.hwdata <= 0;
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
            $display("DRV: single transafer read addr %0d, data %0d", aif.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask

/////////////////////////////increment 4 beats write
    task incr4_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b011;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
        $display("DRV: INCR4 Beats lentgh transafer write addr %0d, data %0d", aif.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(3) begin 
            aif.hwdata <= $urandom_range(1,50);
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: INCR4 beats transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask
/////////////////////////incremen 4 beats read
    task incr4_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b011;

        aif.hwrite <= 1'b0;
        aif.hsel <= 1'b1; 
		tr.hrdata <= aif.hrdata;
        aif.hwdata <= 0;
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
      $display("DRV: INCR4 beats lentgh transafer read addr %0d, data %0d", tr.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(3) begin 
            aif.hwdata <= 0;
            aif.htrans <= 2'b01;   //seq
			tr.hrdata <= aif.hrdata;
            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: INCR4 beats transafer read addr %0d, data %0d", tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask

/////////////////////incr 8 beats write 

    task incr8_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b101;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
      $display("DRV: INCR8 beats lentgh transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(7) begin 
            aif.hwdata <= $urandom_range(1,50);
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: incr 8 beats transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask

///////////////////////////increment 8 beats read

    task incr8_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b011;

        aif.hwrite <= 1'b0;
        aif.hsel <= 1'b1; 
tr.hrdata <= aif.hrdata;
        aif.hwdata <= 0;
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
      $display("DRV: incr 8 beats lentgh transafer read addr %0d, data %0d", tr.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(7) begin 
            aif.hwdata <= 0;
            aif.htrans <= 2'b01;   //seq
tr.hrdata <= aif.hrdata;
            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: incr 8 beats transafer read addr %0d, data %0d",tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


///////////increment 16 beats write 

    task incr16_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b111;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
      $display("DRV:  incr 16 beats lentgh transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(15) begin 
            aif.hwdata <= $urandom_range(1,50);
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: incr 16 beats transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


//////////////////////////increment 16 beats read

    task incr16_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b111;

        aif.hwrite <= 1'b0;
        aif.hsel <= 1'b1; 
tr.hrdata <= aif.hrdata;
        aif.hwdata <= 0;
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
      $display("DRV: incr 16 beats lentgh transafer read addr %0d, data %0d", tr.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(15) begin 
            aif.hwdata <= 0;
            aif.htrans <= 2'b01;   //seq
tr.hrdata <= aif.hrdata;
            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: incr 16 beats transafer read addr %0d, data %0d", tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


///////////////////////wrap4 beats write 

    task wrap4_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b010;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
      $display("DRV: wrap 4 beats lentgh transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(3) begin 
            aif.hwdata <= $urandom_range(1,50);
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: wrap 4 beats transafer write addr %0d, data %0d", tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


//////////////////////////////////////wrap 4 beats read

    task wrap4_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b010;

        aif.hwrite <= 1'b0;
        aif.hsel <= 1'b1; 
tr.hrdata <= aif.hrdata;
        aif.hwdata <= 0;
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
      $display("DRV: wrap 4 beats lentgh transafer read addr %0d, data %0d", tr.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(3) begin 
            aif.hwdata <= 0;
            aif.htrans <= 2'b01;   //seq
tr.hrdata <= aif.hrdata;
            @(posedge aif.hready);
            @(posedge aif.clk);
          $display("DRV: wrap 4 beats transafer read addr %0d, data %0d", tr.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask

/////////////wrap 8 beats write

    task wrap8_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b100;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
        $display("DRV: wrap 8 beats lentgh transafer write addr %0d, data %0d", aif.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(7) begin 
            aif.hwdata <= $urandom_range(1,50);
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
            $display("DRV: wrap 8 beats transafer write addr %0d, data %0d", aif.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask

/////////////////////wrap 8 beats read
    task wrap8_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b100;

        aif.hwrite <= 1'b0;
        aif.hsel <= 1'b1; 
tr.hrdata <= aif.hrdata;
        aif.hwdata <= 0;
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
        $display("DRV: wrap 8 beats lentgh transafer read addr %0d, data %0d", aif.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(7) begin 
            aif.hwdata <= 0;
            aif.htrans <= 2'b01;   //seq
tr.hrdata <= aif.hrdata;
            @(posedge aif.hready);
            @(posedge aif.clk);
            $display("DRV: wrap 8 beats transafer read addr %0d, data %0d", aif.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


//////////////////wrap 16 beats write 

    task wrap16_wr();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b110;

        aif.hwrite <= 1'b1;
        aif.hsel <= 1'b1; 

        aif.hwdata <= $urandom_range(1,50);
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
        $display("DRV: wrap 16 beats lentgh transafer write addr %0d, data %0d", aif.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(15) begin 
            aif.hwdata <= $urandom_range(1,50);
            aif.htrans <= 2'b01;   //seq

            @(posedge aif.hready);
            @(posedge aif.clk);
            $display("DRV: wrap 16 beats transafer write addr %0d, data %0d", aif.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


//////////////////////wrap 16 beats read

    task wrap16_rd();

        @(posedge aif.clk);

        aif.hresetn <= 1'b1;

        aif.hburst <= 3'b110;

        aif.hwrite <= 1'b0;
        aif.hsel <= 1'b1; 
tr.hrdata <= aif.hrdata;
        aif.hwdata <= 0;
        aif.haddr <= tr.haddr;

        aif.hsize <= 3'b010;   //data size 4 bytes 32 bit

        aif.htrans <= 2'b00;     //NON SEQ
        $display("DRV: wrap 16 beats lentgh transafer read addr %0d, data %0d", aif.haddr, aif.hwdata);

        @(posedge aif.hready);
        @(posedge aif.clk);

        repeat(15) begin 
            aif.hwdata <= 0;
            aif.htrans <= 2'b01;   //seq
tr.hrdata <= aif.hrdata;
            @(posedge aif.hready);
            @(posedge aif.clk);
            $display("DRV: wrap 16 beats transafer read addr %0d, data %0d", aif.haddr, aif.hwdata);
        end
        ->drvnext;

    endtask


    task run();
        forever begin 
            mbxgd.get(tr);

            if(tr.hwrite == 1'b1) begin 
                case(tr.hburst) 
                    3'b000: single_tr_wr();
                    3'b001: unspec_len_wr();
                    3'b010: wrap4_wr();
                    3'b011: incr4_wr();
                    3'b100: wrap8_wr();
                    3'b101: incr8_wr();
                    3'b110: wrap16_wr();
                    3'b111: incr16_wr();

                endcase
            end

            else begin 
                case(tr.hburst) 
                    3'b000: single_tr_rd();
                    3'b001: unspec_len_rd();
                    3'b010: wrap4_rd();
                    3'b011: incr4_rd();
                    3'b100: wrap8_rd();
                    3'b101: incr8_rd();
                    3'b110: wrap16_rd();
                    3'b111: incr16_rd();
                endcase
            end
        end
    endtask

endclass


////////////////////////monitor class

class monitor;

    transaction tr;
    virtual ahb_if aif;

    mailbox #(bit [4:0]) mbxgm;
    mailbox #(transaction) mbxms;

    int len = 0;
    bit [4:0] temp;

    function new(mailbox #(transaction) mbxms, mailbox #(bit [4:0]) mbxgm);
        this.mbxgm = mbxgm;
        this.mbxms = mbxms;
    endfunction

//we send address and data to scoreboard which will be stored in an array, 
///for read operation we will send the address to the array and data which we have on the data bus the scb will compare the data with data present in the array

/////////////single transfer write operation

task single_tr_wr();
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.haddr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;

    mbxms.put(tr);
    $display("MON: single transfer write addr : %0d data %0d", tr.haddr, tr.hwdata);
    @(posedge aif.clk);
endtask

/////////single transfer read

task single_tr_rd();
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.haddr;
    tr.hrdata = aif.hrdata;
   // tr.hwrite = 0;

    mbxms.put(tr);
    $display("MON: single transfer read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
endtask

//////////////incr undifine length write

task unspec_tr_wr();
    mbxgm.get(temp);
    
    repeat(temp) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;
    
    mbxms.put(tr);
    $display("MON: UNSPEC transfer write addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask

//////////incr read
task unspec_tr_rd();
    mbxgm.get(temp);
    
    repeat(temp) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hrdata = aif.hrdata;
   // tr.hwrite = 0;
    
    mbxms.put(tr);
    $display("MON: UNSPEC INCR transfer read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask

/////////////////////

////////incr 4 beats write
task incr4_wr();
    
    repeat(3) begin
    // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;
    
    mbxms.put(tr);
    $display("MON: INCR 4 beats write addr : %0d data %0d", tr.haddr, tr.hwdata);
    @(posedge aif.clk);
    end
endtask

////////////incr 4 beaats read

task incr4_rd();
    
    repeat(3) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hrdata = aif.hrdata;
 //   tr.hwrite = 0;
    
    mbxms.put(tr);
    $display("MON: INCR 4 beats read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask

////////incr 8 beats write
task incr8_wr();
    
    repeat(8) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;
    
    mbxms.put(tr);
    $display("MON: INCR 8 beats write addr : %0d data %0d", tr.haddr, tr.hwdata);
    @(posedge aif.clk);
    end
endtask

////////////incr 8 beaats read

task incr8_rd();
    
    repeat(8) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hrdata = aif.hrdata;
   // tr.hwrite = 0;
    
    mbxms.put(tr);
    $display("MON: INCR 8 beats read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask



////////incr 16 beats write
task incr16_wr();
    
    repeat(16) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;
    
    mbxms.put(tr);
    $display("MON: INCR 16 beats write addr : %0d data %0d", tr.haddr, tr.hwdata);
    @(posedge aif.clk);
    end
endtask

////////////incr 16 beaats read

task incr16_rd();
    
    repeat(16) begin
  // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);
    tr.haddr = aif.next_addr;
    tr.hrdata = aif.hrdata;
   // tr.hwrite = 0;
    
    mbxms.put(tr);
    $display("MON: INCR 16 beats read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask


/////////////wrap 4 beats write 

task wrap4_wr();
    
    repeat(4) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;
    
    mbxms.put(tr);
    $display("MON: WRAP 4 beats write addr : %0d data %0d", tr.haddr, tr.hwdata);
    @(posedge aif.clk);
    end
endtask

////////////wrap 4 beats read

task wrap4_rd();
    
    repeat(4) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hrdata = aif.hrdata;
   // tr.hwrite = 0;
    
    mbxms.put(tr);
    $display("MON: WRAP 4 beats read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask

/////////////wrap 8 beats write 

task wrap8_wr();
    
    repeat(8) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;
    
    mbxms.put(tr);
    $display("MON: WRAP 8 beats write addr : %0d data %0d", tr.haddr, tr.hwdata);
    @(posedge aif.clk);
    end
endtask

////////////wrap 8 beats read

task wrap8_rd();
    
    repeat(8) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hrdata = aif.hrdata;
  //  tr.hwrite = 0;
    
    mbxms.put(tr);
    $display("MON: WRAP 8 beats read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask

//////////////wrap 16 beats write
task wrap16_wr();
    
    repeat(16) begin
    // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hwdata = aif.hwdata;
    tr.hwrite = 1;
    
    mbxms.put(tr);
    $display("MON: WRAP 16 beats write addr : %0d data %0d", tr.haddr, tr.hwdata);
    @(posedge aif.clk);
    end
endtask


////////////wrap 16 beats read

task wrap16_rd();
    
    repeat(16) begin
   // @(posedge aif.hresetn);
  @(posedge aif.clk iff aif.hready);

    tr.haddr = aif.next_addr;
    tr.hrdata = aif.hrdata;
   // tr.hwrite = 0;
    
    mbxms.put(tr);
    $display("MON: WRAP 16 beats read addr : %0d data %0d", tr.haddr, tr.hrdata);
    @(posedge aif.clk);
    end
endtask


///////////////////
task run();
    tr = new();
    forever begin 
        @(posedge aif.clk);

        if(aif.hresetn && aif.hsel && aif.hwrite) begin 
            case(aif.hburst)
                3'b000: single_tr_wr();
                3'b001: unspec_tr_wr();
                3'b010: wrap4_wr();
                3'b011: incr4_wr();
                3'b100: wrap8_wr();
                3'b101: incr8_wr();
                3'b110: wrap16_wr();
                3'b111: incr16_wr();
            endcase
        end

         if(aif.hresetn && aif.hsel && (aif.hwrite==0)) begin 
            case(aif.hburst)
                3'b000: single_tr_rd();
                3'b001: unspec_tr_rd();
                3'b010: wrap4_rd();
                3'b011: incr4_rd();
                3'b100: wrap8_rd();
                3'b101: incr8_rd();
                3'b110: wrap16_rd();
                3'b111: incr16_rd();
            endcase
        end
    end
endtask 
endclass


///////////////////////////////////////////////////////////////
//scoreboard class
//////////////////////////////////////////////////////////////
class scoreboard;

    transaction tr;
    //event sconext;

    mailbox #(transaction) mbxms;

    bit [7:0] data[256] = '{default : 12};

    int count = 0;
    int len = 0;
    bit [31:0] rdata;

    function new(mailbox #(transaction) mbxms);
        this.mbxms = mbxms;
    endfunction 


    task run();

        forever begin
            mbxms.get(tr);

                if(tr.hwrite == 1'b1) begin 
                    $display("SCO: DATA WRITE");
                    data[tr.haddr] = tr.hwdata[7:0];
                    data[tr.haddr + 1] = tr.hwdata[15:8];
                    data[tr.haddr +2] = tr.hwdata[23:16];
                    data[tr.haddr + 3] = tr.hwdata[31:24];
                end

                if(tr.hwrite == 1'b0) begin 
                    rdata = {data[tr.haddr + 3], data[tr.haddr + 2], data[tr.haddr+1], data[tr.haddr]};

                    if(tr.hrdata == 32'h0c0c0c0c)
                    $display("SCO: EMPTY LOCATION READ");

                    else if(tr.hrdata == rdata)
                    $display("DATA MATCHED");
                    else 
                    $display("DATA MISMATCHED");
                end

                //->sconext;

            end

    endtask
endclass



//////////////////////////

class environment;

    monitor mon;
    generator gen;
    driver drv;
    scoreboard sco;

    event nextgd;
   // event nextgs;
    event done;

    mailbox #(transaction) mbxgd, mbxms;
    mailbox #(bit [4:0]) mbxgm;

    virtual ahb_if aif;


    function new(virtual ahb_if aif);
        
        mbxgd = new();
        mbxms = new();
     	mbxgm = new();

        gen = new(mbxgd, mbxgm);
        drv = new(mbxgd);

        mon = new(mbxms, mbxgm);
        sco = new(mbxms);

        this.aif = aif;

        drv.aif = aif;
        mon.aif = aif;

        drv.drvnext = nextgd;
        gen.drvnext = nextgd;

       // gen.sconext = nextgs;
        //sco.sconext = nextgs;

     endfunction 



    task pre_test();
        drv.reset();
    endtask

  task test();

    fork
      gen.run();
      drv.run();
      mon.run();
      sco.run();
    join_none

  endtask

  task post_test();
    fork
        begin
            wait(gen.done.triggered);
        end
       // begin
         //   #5000; // safety timeout
           // $display("Timeout reached, ending simulation");
        //end
    join_any
    disable fork;

    repeat(5) @(posedge aif.clk);
    $finish;
endtask

  task run();

    pre_test();
    test();
    post_test();

  endtask

endclass

/////////////////top module 

module tb();

    environment env;

    ahb_if aif();

    ahb_slave dut (.clk(aif.clk), 
                    .hresetn(aif.hresetn),
                    .hsel(aif.hsel),
                    .hready(aif.hready),
                    .hresp(aif.hresp),
                    .hwrite(aif.hwrite),
                    .hsize(aif.hsize),
                    .hburst(aif.hburst),
                    .hwdata(aif.hwdata),
                    .hrdata(aif.hrdata),
                    .haddr(aif.haddr),
                    .htrans(aif.htrans));

    initial begin 
        aif.clk = 0;
    end


    always #10 aif.clk = ~aif.clk;
    
    
    initial begin
        env = new(aif);
        env.gen.count = 4;
        env.run();
    end

    assign aif.next_addr = dut.next_addr;
  	

    initial begin 
        $dumpfile("dump.vcd");
        $dumpvars;
    end
endmodule 

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN___024ROOT_H_
#define VERILATED_VTBDESIGN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VTBdesign___024unit;
class VTBdesign___024unit__03a__03adriver__Vclpkg;
class VTBdesign___024unit__03a__03aenvironment;
class VTBdesign___024unit__03a__03aenvironment__Vclpkg;
class VTBdesign___024unit__03a__03agenerator;
class VTBdesign___024unit__03a__03agenerator__Vclpkg;
class VTBdesign___024unit__03a__03amonitor__Vclpkg;
class VTBdesign___024unit__03a__03ascoreboard__Vclpkg;
class VTBdesign___024unit__03a__03atransaction__Vclpkg;
class VTBdesign_ahb_if;
class VTBdesign_std;
class VTBdesign_std__03a__03amailbox__Tz1__Vclpkg;
class VTBdesign_std__03a__03amailbox__Tz2__Vclpkg;
class VTBdesign_std__03a__03aprocess__Vclpkg;
class VTBdesign_std__03a__03asemaphore__Vclpkg;


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign___024root final {
  public:
    // CELLS
    VTBdesign___024unit* __PVT____024unit;
    VTBdesign_std* __PVT__std;
    VTBdesign_ahb_if* __PVT__tb__DOT__aif;
    VTBdesign___024unit__03a__03atransaction__Vclpkg* __024unit__03a__03atransaction__Vclpkg;
    VTBdesign___024unit__03a__03agenerator__Vclpkg* __024unit__03a__03agenerator__Vclpkg;
    VTBdesign___024unit__03a__03adriver__Vclpkg* __024unit__03a__03adriver__Vclpkg;
    VTBdesign___024unit__03a__03amonitor__Vclpkg* __024unit__03a__03amonitor__Vclpkg;
    VTBdesign___024unit__03a__03ascoreboard__Vclpkg* __024unit__03a__03ascoreboard__Vclpkg;
    VTBdesign___024unit__03a__03aenvironment__Vclpkg* __024unit__03a__03aenvironment__Vclpkg;
    VTBdesign_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    VTBdesign_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    VTBdesign_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;
    VTBdesign_std__03a__03amailbox__Tz2__Vclpkg* std__03a__03amailbox__Tz2__Vclpkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ tb__DOT____Vcellout__dut__hresp;
        CData/*0:0*/ tb__DOT____Vcellout__dut__hready;
        CData/*7:0*/ tb__DOT__dut__DOT__boundary__Vstatic__temp;
        CData/*0:0*/ tb__DOT__dut__DOT__first;
        CData/*7:0*/ tb__DOT__dut__DOT__wboundary;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__3__Vfuncout;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__3__hburst;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__3__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__6__Vfuncout;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__6__hburst;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__6__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__9__Vfuncout;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__9__hburst;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__9__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__14__Vfuncout;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__14__hburst;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__14__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__17__Vfuncout;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__17__hburst;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__17__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize;
        CData/*7:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__20__Vfuncout;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__20__hburst;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__boundary__20__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__unincr_rd__22__hsize;
        CData/*2:0*/ __Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize;
        CData/*0:0*/ __VnbaEventTrigger;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoDidInit;
        CData/*2:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__hburst;
        CData/*0:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__hresetn;
        CData/*0:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__hsel;
        CData/*2:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__hsize;
        CData/*1:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__htrans;
        CData/*0:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__hwrite;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__aif__clk__0;
        CData/*2:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__hburst;
        CData/*0:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__hresetn;
        CData/*0:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__hsel;
        CData/*2:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__hsize;
        CData/*1:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__htrans;
        CData/*0:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__hwrite;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
    };
    struct {
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb__DOT____Vcellout__dut__hrdata;
        IData/*31:0*/ tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4;
        IData/*31:0*/ tb__DOT__dut__DOT__incr_wr__Vstatic__raddr;
        IData/*31:0*/ tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_rd__Vstatic__addr1;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_rd__Vstatic__addr2;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_rd__Vstatic__addr3;
        IData/*31:0*/ tb__DOT__dut__DOT__wrap_rd__Vstatic__addr4;
        IData/*31:0*/ tb__DOT__dut__DOT__incr_rd__Vstatic__raddr;
        IData/*31:0*/ tb__DOT__dut__DOT__state;
        IData/*31:0*/ tb__DOT__dut__DOT__next_state;
        IData/*31:0*/ tb__DOT__dut__DOT__len_count;
        IData/*31:0*/ tb__DOT__dut__DOT__retaddr;
        IData/*31:0*/ tb__DOT__dut__DOT__next_addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__2__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__4__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__5__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__7__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__8__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__10__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__unincr_wr__11__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__single_tr__12__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__single_tr__12__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__13__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__15__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__16__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__18__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__19__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__21__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__Vfuncout;
        IData/*31:0*/ __Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__0;
        IData/*31:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__haddr;
        IData/*31:0*/ __Vtrigprevvif_ico_TOP__tb__DOT__aif__hwdata;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__1;
        IData/*31:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__haddr;
        IData/*31:0*/ __Vtrigprevvif_act_TOP__tb__DOT__aif__hwdata;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*7:0*/, 256> tb__DOT__dut__DOT__mem;
        VlUnpacked<QData/*63:0*/, 2> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 2> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;
    VlAssignableEvent __VnbaEvent;

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign___024root(VTBdesign__Syms* symsp, const char* namep);
    ~VTBdesign___024root();
    VL_UNCOPYABLE(VTBdesign___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

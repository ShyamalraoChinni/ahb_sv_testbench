// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VTBdesign__Syms.h"


void VTBdesign___024root__trace_chg_0_sub_0(VTBdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTBdesign___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_chg_0\n"); );
    // Body
    VTBdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTBdesign___024root*>(voidSelf);
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VTBdesign___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTBdesign___024root__trace_chg_0_sub_0(VTBdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_chg_0_sub_0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr1),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr2),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr3),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr4),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+4,(vlSelfRef.tb__DOT____Vcellout__dut__hrdata),32);
        bufp->chgCData(oldp+5,(vlSelfRef.tb__DOT____Vcellout__dut__hresp),2);
        bufp->chgBit(oldp+6,(vlSelfRef.tb__DOT____Vcellout__dut__hready));
        bufp->chgIData(oldp+7,(vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr),32);
        bufp->chgCData(oldp+8,(vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp),8);
        bufp->chgIData(oldp+9,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb__DOT__dut__DOT__next_state),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb__DOT__dut__DOT__len_count),32);
        bufp->chgBit(oldp+18,(vlSelfRef.tb__DOT__dut__DOT__first));
        bufp->chgIData(oldp+19,(vlSelfRef.tb__DOT__dut__DOT__retaddr),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb__DOT__dut__DOT__next_addr),32);
        bufp->chgCData(oldp+21,(vlSelfRef.tb__DOT__dut__DOT__wboundary),8);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__tb__DOT__aif.hrdata),32);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__tb__DOT__aif.hready));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__tb__DOT__aif.next_addr),32);
    }
    bufp->chgBit(oldp+25,(vlSymsp->TOP__tb__DOT__aif.clk));
    bufp->chgBit(oldp+26,(vlSymsp->TOP__tb__DOT__aif.hresetn));
    bufp->chgBit(oldp+27,(vlSymsp->TOP__tb__DOT__aif.hsel));
    bufp->chgBit(oldp+28,(vlSymsp->TOP__tb__DOT__aif.hwrite));
    bufp->chgCData(oldp+29,(vlSymsp->TOP__tb__DOT__aif.hsize),3);
    bufp->chgCData(oldp+30,(vlSymsp->TOP__tb__DOT__aif.hburst),3);
    bufp->chgCData(oldp+31,(vlSymsp->TOP__tb__DOT__aif.htrans),2);
    bufp->chgIData(oldp+32,(vlSymsp->TOP__tb__DOT__aif.hwdata),32);
    bufp->chgIData(oldp+33,(vlSymsp->TOP__tb__DOT__aif.haddr),32);
    bufp->chgIData(oldp+34,(vlSelfRef.tb__DOT__dut__DOT__state),32);
}

void VTBdesign___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_cleanup\n"); );
    // Body
    VTBdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTBdesign___024root*>(voidSelf);
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

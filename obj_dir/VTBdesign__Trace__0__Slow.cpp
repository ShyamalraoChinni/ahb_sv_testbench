// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VTBdesign__Syms.h"


VL_ATTR_COLD void VTBdesign___024root__trace_init_sub__TOP__tb__DOT__aif__0(VTBdesign___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTBdesign___024root__trace_init_sub__TOP__0(VTBdesign___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_init_sub__TOP__0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "aif", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VTBdesign___024root__trace_init_sub__TOP__tb__DOT__aif__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"hresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"hsel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"hwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"hsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"hburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"htrans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"hwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"haddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"hrdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"hresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"hready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"unincr_wr__Vstatic__raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"boundary__Vstatic__temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"wrap_wr__Vstatic__addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"wrap_wr__Vstatic__addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"wrap_wr__Vstatic__addr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"wrap_wr__Vstatic__addr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"incr_wr__Vstatic__raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"unincr_rd__Vstatic__raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"wrap_rd__Vstatic__addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"wrap_rd__Vstatic__addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"wrap_rd__Vstatic__addr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"wrap_rd__Vstatic__addr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"incr_rd__Vstatic__raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"len_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"retaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"next_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"wboundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VTBdesign___024root__trace_init_sub__TOP__tb__DOT__aif__0(VTBdesign___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_init_sub__TOP__tb__DOT__aif__0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+25,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"haddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"hwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"hsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"hburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"hresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"htrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"hrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"hresetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"hsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"hwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"hready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"next_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void VTBdesign___024root__trace_init_top(VTBdesign___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_init_top\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTBdesign___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTBdesign___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTBdesign___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTBdesign___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTBdesign___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTBdesign___024root__trace_register(VTBdesign___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_register\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTBdesign___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VTBdesign___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VTBdesign___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VTBdesign___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTBdesign___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_const_0\n"); );
    // Body
    VTBdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTBdesign___024root*>(voidSelf);
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VTBdesign___024root__trace_full_0_sub_0(VTBdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTBdesign___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_full_0\n"); );
    // Body
    VTBdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTBdesign___024root*>(voidSelf);
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTBdesign___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTBdesign___024root__trace_full_0_sub_0(VTBdesign___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root__trace_full_0_sub_0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr1),32);
    bufp->fullIData(oldp+1,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr2),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr3),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb__DOT__dut__DOT__wrap_rd__Vstatic__addr4),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb__DOT____Vcellout__dut__hrdata),32);
    bufp->fullCData(oldp+5,(vlSelfRef.tb__DOT____Vcellout__dut__hresp),2);
    bufp->fullBit(oldp+6,(vlSelfRef.tb__DOT____Vcellout__dut__hready));
    bufp->fullIData(oldp+7,(vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr),32);
    bufp->fullCData(oldp+8,(vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp),8);
    bufp->fullIData(oldp+9,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb__DOT__dut__DOT__next_state),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb__DOT__dut__DOT__len_count),32);
    bufp->fullBit(oldp+18,(vlSelfRef.tb__DOT__dut__DOT__first));
    bufp->fullIData(oldp+19,(vlSelfRef.tb__DOT__dut__DOT__retaddr),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb__DOT__dut__DOT__next_addr),32);
    bufp->fullCData(oldp+21,(vlSelfRef.tb__DOT__dut__DOT__wboundary),8);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__tb__DOT__aif.hrdata),32);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__tb__DOT__aif.hready));
    bufp->fullIData(oldp+24,(vlSymsp->TOP__tb__DOT__aif.next_addr),32);
    bufp->fullBit(oldp+25,(vlSymsp->TOP__tb__DOT__aif.clk));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__tb__DOT__aif.hresetn));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__tb__DOT__aif.hsel));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__tb__DOT__aif.hwrite));
    bufp->fullCData(oldp+29,(vlSymsp->TOP__tb__DOT__aif.hsize),3);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__tb__DOT__aif.hburst),3);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__tb__DOT__aif.htrans),2);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__tb__DOT__aif.hwdata),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__tb__DOT__aif.haddr),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb__DOT__dut__DOT__state),32);
}

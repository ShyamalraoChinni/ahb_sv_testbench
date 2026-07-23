// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

VL_ATTR_COLD void Vdesign___024root___eval_static(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_static\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_static__TOP___Vilp1;
    // Body
    __Vinline__eval_static__TOP___Vilp1 = 0U;
    while ((__Vinline__eval_static__TOP___Vilp1 <= 0x000000ffU)) {
        vlSelfRef.tb__DOT__dut__DOT__mem[__Vinline__eval_static__TOP___Vilp1] = 0x0cU;
        __Vinline__eval_static__TOP___Vilp1 = ((IData)(1U) 
                                               + __Vinline__eval_static__TOP___Vilp1);
    }
    vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr = 0U;
    vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr = 0U;
    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__0 
        = vlSelfRef.tb__DOT__dut__DOT__retaddr;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__haddr 
        = vlSymsp->TOP__tb__DOT__aif.haddr;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hburst 
        = vlSymsp->TOP__tb__DOT__aif.hburst;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hresetn 
        = vlSymsp->TOP__tb__DOT__aif.hresetn;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsel 
        = vlSymsp->TOP__tb__DOT__aif.hsel;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsize 
        = vlSymsp->TOP__tb__DOT__aif.hsize;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__htrans 
        = vlSymsp->TOP__tb__DOT__aif.htrans;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwdata 
        = vlSymsp->TOP__tb__DOT__aif.hwdata;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwrite 
        = vlSymsp->TOP__tb__DOT__aif.hwrite;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__1 
        = vlSelfRef.tb__DOT__dut__DOT__retaddr;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__aif__clk__0 
        = vlSymsp->TOP__tb__DOT__aif.clk;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__haddr 
        = vlSymsp->TOP__tb__DOT__aif.haddr;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hburst 
        = vlSymsp->TOP__tb__DOT__aif.hburst;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hresetn 
        = vlSymsp->TOP__tb__DOT__aif.hresetn;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hsel 
        = vlSymsp->TOP__tb__DOT__aif.hsel;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hsize 
        = vlSymsp->TOP__tb__DOT__aif.hsize;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__htrans 
        = vlSymsp->TOP__tb__DOT__aif.htrans;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hwdata 
        = vlSymsp->TOP__tb__DOT__aif.hwdata;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hwrite 
        = vlSymsp->TOP__tb__DOT__aif.hwrite;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vdesign___024root___eval_static__TOP(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_static__TOP\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x000000ffU)) {
        vlSelfRef.tb__DOT__dut__DOT__mem[__Vilp1] = 0x0cU;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr = 0U;
    vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4 = 0U;
    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr = 0U;
    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr = 0U;
}

VL_ATTR_COLD void Vdesign___024root___eval_initial__TOP(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_initial__TOP\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__tb__DOT__aif.clk = 0U;
    vlSymsp->_vm_contextp__->dumpfile("dump.vcd"s);
    VL_PRINTF_MT("-Info: testbench.sv:1276: $dumpvar ignored, as Verilated without --trace\n");
}

VL_ATTR_COLD void Vdesign___024root___eval_final(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_final\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdesign___024root___eval_phase__stl(Vdesign___024root* vlSelf);

VL_ATTR_COLD void Vdesign___024root___eval_settle(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_settle\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdesign___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbench.sv", 1238, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vdesign___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vdesign___024root___eval_triggers_vec__stl(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_triggers_vec__stl\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    (vlSelfRef.tb__DOT__dut__DOT__retaddr 
                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__0 
        = vlSelfRef.tb__DOT__dut__DOT__retaddr;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vdesign___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdesign___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb.dut.retaddr)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdesign___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

VL_ATTR_COLD void Vdesign___024root___stl_comb__TOP__0(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___stl_comb__TOP__0\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
        vlSelfRef.tb__DOT____Vcellout__dut__hready = 0U;
        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
    } else if ((1U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        vlSelfRef.tb__DOT__dut__DOT__next_state = (
                                                   (((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
                                                     & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
                                                    & (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite))
                                                    ? 
                                                   ((0x00000100U 
                                                     > vlSymsp->TOP__tb__DOT__aif.haddr)
                                                     ? 4U
                                                     : 0U)
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
                                                      & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
                                                     & (~ (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite)))
                                                     ? 
                                                    ((0x00000100U 
                                                      > vlSymsp->TOP__tb__DOT__aif.haddr)
                                                      ? 4U
                                                      : 0U)
                                                     : 0U));
    } else if ((4U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        if ((0U == (IData)(vlSymsp->TOP__tb__DOT__aif.htrans))) {
            vlSelfRef.tb__DOT__dut__DOT__next_addr 
                = vlSymsp->TOP__tb__DOT__aif.haddr;
            vlSelfRef.tb__DOT__dut__DOT__next_state 
                = ((IData)(vlSymsp->TOP__tb__DOT__aif.hwrite)
                    ? 2U : 3U);
        } else if ((1U == (IData)(vlSymsp->TOP__tb__DOT__aif.htrans))) {
            vlSelfRef.tb__DOT__dut__DOT__next_addr 
                = vlSelfRef.tb__DOT__dut__DOT__retaddr;
            vlSelfRef.tb__DOT__dut__DOT__next_state 
                = ((IData)(vlSymsp->TOP__tb__DOT__aif.hwrite)
                    ? 2U : 3U);
        }
    } else if ((2U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        if ((4U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
            if ((2U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize 
                        = vlSymsp->TOP__tb__DOT__aif.hsize;
                    vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr 
                        = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                    if (VL_GTES_III(32, 0x0000000eU, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                        vlSelfRef.tb__DOT__dut__DOT__len_count 
                            = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                    } else {
                        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                    }
                    if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                            = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr);
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & ((IData)(1U) 
                                                             + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr))] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 8U));
                        vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                            = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr);
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & ((IData)(1U) 
                                                             + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr))] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 8U));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & ((IData)(2U) 
                                                             + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr))] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 0x10U));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & ((IData)(3U) 
                                                             + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr))] 
                            = (vlSymsp->TOP__tb__DOT__aif.hwdata 
                               >> 0x18U);
                        vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                            = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr);
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize)))))))))) {
                        if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:197: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_wr", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize));
                                VL_STOP_MT("design.sv", 197, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:197: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_wr", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize));
                            VL_STOP_MT("design.sv", 197, "");
                        }
                    }
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__Vfuncout 
                        = vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr;
                    vlSelfRef.tb__DOT__dut__DOT__retaddr 
                        = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__2__Vfuncout;
                } else {
                    vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize 
                        = vlSymsp->TOP__tb__DOT__aif.hsize;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst 
                        = vlSymsp->TOP__tb__DOT__aif.hburst;
                    if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 4U;
                        } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                        } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((6U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                                                << 2U) 
                                                               | (((4U 
                                                                    == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                                                   << 1U) 
                                                                  | (2U 
                                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)))))))))) {
                            if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                         << 2U) | (
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                                    << 1U) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst));
                                    VL_STOP_MT("design.sv", 89, "");
                                }
                            } else if (VL_UNLIKELY((
                                                    vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst));
                                VL_STOP_MT("design.sv", 89, "");
                            }
                        }
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                        } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                        } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                        }
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                        } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                        } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x40U;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((6U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                                                << 2U) 
                                                               | (((4U 
                                                                    == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                                                   << 1U) 
                                                                  | (2U 
                                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)))))))))) {
                            if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                         << 2U) | (
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)) 
                                                    << 1U) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst)))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst));
                                    VL_STOP_MT("design.sv", 104, "");
                                }
                            } else if (VL_UNLIKELY((
                                                    vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst));
                                VL_STOP_MT("design.sv", 104, "");
                            }
                        }
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize)))))))))) {
                        if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize));
                                VL_STOP_MT("design.sv", 87, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize));
                            VL_STOP_MT("design.sv", 87, "");
                        }
                    }
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__Vfuncout 
                        = vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp;
                    vlSelfRef.tb__DOT__dut__DOT__wboundary 
                        = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__3__Vfuncout;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize 
                        = vlSymsp->TOP__tb__DOT__aif.hsize;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary 
                        = vlSelfRef.tb__DOT__dut__DOT__wboundary;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr 
                        = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                    {
                        if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize))) {
                            vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                              & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr)] 
                                = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                            vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                                = ((0U == VL_MODDIV_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary)))
                                    ? (((IData)(1U) 
                                        + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr) 
                                       - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary))
                                    : ((IData)(1U) 
                                       + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr));
                            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__Vfuncout 
                                = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1;
                            goto __Vlabel0;
                        } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize))) {
                            vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                              & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr)] 
                                = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                            vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                                = ((0U == VL_MODDIV_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary)))
                                    ? (((IData)(1U) 
                                        + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr) 
                                       - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary))
                                    : ((IData)(1U) 
                                       + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr));
                            vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                              & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1)] 
                                = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                                  >> 8U));
                            vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 
                                = ((0U == VL_MODDIV_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary)))
                                    ? (((IData)(1U) 
                                        + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1) 
                                       - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary))
                                    : ((IData)(1U) 
                                       + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1));
                            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__Vfuncout 
                                = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2;
                            goto __Vlabel0;
                        } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize))) {
                            vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                              & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr)] 
                                = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                            vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                                = ((0U == VL_MODDIV_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary)))
                                    ? (((IData)(1U) 
                                        + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr) 
                                       - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary))
                                    : ((IData)(1U) 
                                       + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr));
                            vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                              & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1)] 
                                = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                                  >> 8U));
                            vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 
                                = ((0U == VL_MODDIV_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary)))
                                    ? (((IData)(1U) 
                                        + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1) 
                                       - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary))
                                    : ((IData)(1U) 
                                       + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1));
                            vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                              & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2)] 
                                = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                                  >> 0x10U));
                            vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3 
                                = ((0U == VL_MODDIV_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary)))
                                    ? (((IData)(1U) 
                                        + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2) 
                                       - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary))
                                    : ((IData)(1U) 
                                       + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2));
                            vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                              & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3)] 
                                = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                                  >> 0x10U));
                            vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4 
                                = ((0U == VL_MODDIV_III(32, 
                                                        ((IData)(1U) 
                                                         + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary)))
                                    ? (((IData)(1U) 
                                        + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3) 
                                       - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary))
                                    : ((IData)(1U) 
                                       + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3));
                            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__Vfuncout 
                                = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4;
                            goto __Vlabel0;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize)) 
                                                                << 2U) 
                                                               | (((1U 
                                                                    == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize)) 
                                                                   << 1U) 
                                                                  | (0U 
                                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize)))))))))) {
                            if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize)) 
                                         << 2U) | (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize)) 
                                                    << 1U) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize)))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: design.sv:121: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.wrap_wr", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize));
                                    VL_STOP_MT("design.sv", 121, "");
                                }
                            } else if (VL_UNLIKELY((
                                                    vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:121: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.wrap_wr", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize));
                                VL_STOP_MT("design.sv", 121, "");
                            }
                        }
                        __Vlabel0: ;
                    }
                    vlSelfRef.tb__DOT__dut__DOT__retaddr 
                        = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__Vfuncout;
                    if (VL_GTES_III(32, 0x0000000eU, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                        vlSelfRef.tb__DOT__dut__DOT__len_count 
                            = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                    } else {
                        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize))) {
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr)] 
                        = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                        = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr);
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize))) {
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr)] 
                        = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(1U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr))] 
                        = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                          >> 8U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                        = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr);
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize))) {
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr)] 
                        = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(1U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr))] 
                        = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                          >> 8U));
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr))] 
                        = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                          >> 0x10U));
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(3U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr))] 
                        = (vlSymsp->TOP__tb__DOT__aif.hwdata 
                           >> 0x18U);
                    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                        = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr);
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:197: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_wr", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize));
                            VL_STOP_MT("design.sv", 197, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:197: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_wr", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize));
                        VL_STOP_MT("design.sv", 197, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr;
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__5__Vfuncout;
                if (VL_GTES_III(32, 6U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst 
                    = vlSymsp->TOP__tb__DOT__aif.hburst;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 4U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst));
                                VL_STOP_MT("design.sv", 89, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst));
                            VL_STOP_MT("design.sv", 89, "");
                        }
                    }
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    }
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x40U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst));
                                VL_STOP_MT("design.sv", 104, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst));
                            VL_STOP_MT("design.sv", 104, "");
                        }
                    }
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize));
                            VL_STOP_MT("design.sv", 87, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize));
                        VL_STOP_MT("design.sv", 87, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp;
                vlSelfRef.tb__DOT__dut__DOT__wboundary 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__6__Vfuncout;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary 
                    = vlSelfRef.tb__DOT__dut__DOT__wboundary;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                {
                    if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary)))
                                ? (((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary))
                                : ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr));
                        vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__Vfuncout 
                            = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1;
                        goto __Vlabel1;
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary)))
                                ? (((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary))
                                : ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 8U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1));
                        vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__Vfuncout 
                            = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2;
                        goto __Vlabel1;
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary)))
                                ? (((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary))
                                : ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 8U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 0x10U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 0x10U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3));
                        vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__Vfuncout 
                            = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4;
                        goto __Vlabel1;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize)))))))))) {
                        if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:121: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.wrap_wr", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize));
                                VL_STOP_MT("design.sv", 121, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:121: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.wrap_wr", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize));
                            VL_STOP_MT("design.sv", 121, "");
                        }
                    }
                    __Vlabel1: ;
                }
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__Vfuncout;
                if (VL_GTES_III(32, 6U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
            if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize))) {
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr)] 
                        = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                        = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr);
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize))) {
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr)] 
                        = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(1U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr))] 
                        = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                          >> 8U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                        = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr);
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize))) {
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr)] 
                        = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(1U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr))] 
                        = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                          >> 8U));
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr))] 
                        = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                          >> 0x10U));
                    vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                      & ((IData)(3U) 
                                                         + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr))] 
                        = (vlSymsp->TOP__tb__DOT__aif.hwdata 
                           >> 0x18U);
                    vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr 
                        = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr);
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:197: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_wr", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize));
                            VL_STOP_MT("design.sv", 197, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:197: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_wr", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize));
                        VL_STOP_MT("design.sv", 197, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__incr_wr__Vstatic__raddr;
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_wr__8__Vfuncout;
                if (VL_GTES_III(32, 2U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst 
                    = vlSymsp->TOP__tb__DOT__aif.hburst;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 4U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst));
                                VL_STOP_MT("design.sv", 89, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst));
                            VL_STOP_MT("design.sv", 89, "");
                        }
                    }
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    }
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x40U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst));
                                VL_STOP_MT("design.sv", 104, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst));
                            VL_STOP_MT("design.sv", 104, "");
                        }
                    }
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize));
                            VL_STOP_MT("design.sv", 87, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize));
                        VL_STOP_MT("design.sv", 87, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp;
                vlSelfRef.tb__DOT__dut__DOT__wboundary 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__9__Vfuncout;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary 
                    = vlSelfRef.tb__DOT__dut__DOT__wboundary;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                {
                    if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary)))
                                ? (((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary))
                                : ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr));
                        vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__Vfuncout 
                            = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1;
                        goto __Vlabel2;
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary)))
                                ? (((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary))
                                : ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 8U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1));
                        vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__Vfuncout 
                            = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2;
                        goto __Vlabel2;
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize))) {
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr)] 
                            = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary)))
                                ? (((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary))
                                : ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 8U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr1));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 0x10U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr2));
                        vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                          & vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3)] 
                            = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                              >> 0x10U));
                        vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4 
                            = ((0U == VL_MODDIV_III(32, 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3), (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary)))
                                ? (((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3) 
                                   - (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary))
                                : ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr3));
                        vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__Vfuncout 
                            = vlSelfRef.tb__DOT__dut__DOT__wrap_wr__Vstatic__addr4;
                        goto __Vlabel2;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize)))))))))) {
                        if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:121: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.wrap_wr", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize));
                                VL_STOP_MT("design.sv", 121, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:121: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.wrap_wr", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize));
                            VL_STOP_MT("design.sv", 121, "");
                        }
                    }
                    __Vlabel2: ;
                }
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__Vfuncout;
                if (VL_GTES_III(32, 2U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            }
        } else if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize 
                = vlSymsp->TOP__tb__DOT__aif.hsize;
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr 
                = vlSelfRef.tb__DOT__dut__DOT__next_addr;
            if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize))) {
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr)] 
                    = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr);
            } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize))) {
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr)] 
                    = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr))] 
                    = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                      >> 8U));
                vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr 
                    = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr);
            } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize))) {
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr)] 
                    = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr))] 
                    = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                      >> 8U));
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr))] 
                    = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                      >> 0x10U));
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr))] 
                    = (vlSymsp->TOP__tb__DOT__aif.hwdata 
                       >> 0x18U);
                vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr 
                    = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr);
            }
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize)))))))))) {
                if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize)) 
                             << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize)) 
                                        << 1U) | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:59: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.unincr_wr", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize));
                        VL_STOP_MT("design.sv", 59, "");
                    }
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: design.sv:59: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.unincr_wr", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize));
                    VL_STOP_MT("design.sv", 59, "");
                }
            }
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__Vfuncout 
                = vlSelfRef.tb__DOT__dut__DOT__unincr_wr__Vstatic__raddr;
            vlSelfRef.tb__DOT__dut__DOT__retaddr = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__Vfuncout;
            vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
            if (VL_GTS_III(32, 0x00000020U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                vlSelfRef.tb__DOT__dut__DOT__len_count 
                    = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
            }
        } else {
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize 
                = vlSymsp->TOP__tb__DOT__aif.hsize;
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr 
                = vlSelfRef.tb__DOT__dut__DOT__next_addr;
            if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize))) {
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr)] 
                    = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
            } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize))) {
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr)] 
                    = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr))] 
                    = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                      >> 8U));
            } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize))) {
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr)] 
                    = (0x000000ffU & vlSymsp->TOP__tb__DOT__aif.hwdata);
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr))] 
                    = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                      >> 8U));
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr))] 
                    = (0x000000ffU & (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                      >> 0x10U));
                vlSelfRef.tb__DOT__dut__DOT__mem[(0x000000ffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr))] 
                    = (vlSymsp->TOP__tb__DOT__aif.hwdata 
                       >> 0x18U);
            }
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize)))))))))) {
                if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize)) 
                             << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize)) 
                                        << 1U) | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:35: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.single_tr", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize));
                        VL_STOP_MT("design.sv", 35, "");
                    }
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: design.sv:35: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.single_tr", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize));
                    VL_STOP_MT("design.sv", 35, "");
                }
            }
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__Vfuncout 
                = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr;
            vlSelfRef.tb__DOT__dut__DOT__retaddr = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr__12__Vfuncout;
            vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
            vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
        }
    } else if ((3U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        if ((4U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
            if ((2U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize 
                        = vlSymsp->TOP__tb__DOT__aif.hsize;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr 
                        = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                    if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize))) {
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | vlSelfRef.tb__DOT__dut__DOT__mem
                               [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr)]);
                        vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                            = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr);
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize))) {
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | vlSelfRef.tb__DOT__dut__DOT__mem
                               [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr)]);
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr))]) 
                                  << 8U));
                        vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                            = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr);
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize))) {
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | vlSelfRef.tb__DOT__dut__DOT__mem
                               [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr)]);
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr))]) 
                                  << 8U));
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr))]) 
                                  << 0x00000010U));
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(3U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr))]) 
                                  << 0x00000018U));
                        vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                            = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr);
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize)))))))))) {
                        if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize));
                                VL_STOP_MT("design.sv", 351, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize));
                            VL_STOP_MT("design.sv", 351, "");
                        }
                    }
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__Vfuncout 
                        = vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr;
                    vlSelfRef.tb__DOT__dut__DOT__retaddr 
                        = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__13__Vfuncout;
                    if (VL_GTS_III(32, 0x0000000eU, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                        vlSelfRef.tb__DOT__dut__DOT__len_count 
                            = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                    } else {
                        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize 
                        = vlSymsp->TOP__tb__DOT__aif.hsize;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst 
                        = vlSymsp->TOP__tb__DOT__aif.hburst;
                    if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 4U;
                        } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                        } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((6U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                                                << 2U) 
                                                               | (((4U 
                                                                    == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                                                   << 1U) 
                                                                  | (2U 
                                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)))))))))) {
                            if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                         << 2U) | (
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                                    << 1U) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst));
                                    VL_STOP_MT("design.sv", 89, "");
                                }
                            } else if (VL_UNLIKELY((
                                                    vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst));
                                VL_STOP_MT("design.sv", 89, "");
                            }
                        }
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                        } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                        } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                        }
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize))) {
                        if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                        } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                        } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst))) {
                            vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x40U;
                        }
                        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                              (((6U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                                                << 2U) 
                                                               | (((4U 
                                                                    == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                                                   << 1U) 
                                                                  | (2U 
                                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)))))))))) {
                            if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                         << 2U) | (
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)) 
                                                    << 1U) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst)))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst));
                                    VL_STOP_MT("design.sv", 104, "");
                                }
                            } else if (VL_UNLIKELY((
                                                    vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst));
                                VL_STOP_MT("design.sv", 104, "");
                            }
                        }
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize)))))))))) {
                        if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize));
                                VL_STOP_MT("design.sv", 87, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize));
                            VL_STOP_MT("design.sv", 87, "");
                        }
                    }
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__Vfuncout 
                        = vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp;
                    vlSelfRef.tb__DOT__dut__DOT__wboundary 
                        = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__14__Vfuncout;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize 
                        = vlSymsp->TOP__tb__DOT__aif.hsize;
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr 
                        = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                    if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize))) {
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | vlSelfRef.tb__DOT__dut__DOT__mem
                               [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr)]);
                        vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                            = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr);
                    } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize))) {
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | vlSelfRef.tb__DOT__dut__DOT__mem
                               [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr)]);
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr))]) 
                                  << 8U));
                        vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                            = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr);
                    } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize))) {
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | vlSelfRef.tb__DOT__dut__DOT__mem
                               [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr)]);
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr))]) 
                                  << 8U));
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr))]) 
                                  << 0x00000010U));
                        vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                            = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                               | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                          [(0x000000ffU 
                                            & ((IData)(3U) 
                                               + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr))]) 
                                  << 0x00000018U));
                        vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                            = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr);
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((2U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize)) 
                                                            << 2U) 
                                                           | (((1U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize)) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize)))))))))) {
                        if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize)) 
                                     << 2U) | (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize)) 
                                                << 1U) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize));
                                VL_STOP_MT("design.sv", 351, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize));
                            VL_STOP_MT("design.sv", 351, "");
                        }
                    }
                    vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__Vfuncout 
                        = vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr;
                    vlSelfRef.tb__DOT__dut__DOT__retaddr 
                        = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__15__Vfuncout;
                    if (VL_GTS_III(32, 0x0000000eU, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                        vlSelfRef.tb__DOT__dut__DOT__len_count 
                            = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                    } else {
                        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                        vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr)]);
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr);
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr);
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(2U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr))]) 
                              << 0x00000010U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(3U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr))]) 
                              << 0x00000018U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr);
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize));
                            VL_STOP_MT("design.sv", 351, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize));
                        VL_STOP_MT("design.sv", 351, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr;
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__16__Vfuncout;
                if (VL_GTS_III(32, 6U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst 
                    = vlSymsp->TOP__tb__DOT__aif.hburst;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 4U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst));
                                VL_STOP_MT("design.sv", 89, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst));
                            VL_STOP_MT("design.sv", 89, "");
                        }
                    }
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    }
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x40U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst));
                                VL_STOP_MT("design.sv", 104, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst));
                            VL_STOP_MT("design.sv", 104, "");
                        }
                    }
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize));
                            VL_STOP_MT("design.sv", 87, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize));
                        VL_STOP_MT("design.sv", 87, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp;
                vlSelfRef.tb__DOT__dut__DOT__wboundary 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__17__Vfuncout;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr)]);
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr);
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr);
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(2U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr))]) 
                              << 0x00000010U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(3U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr))]) 
                              << 0x00000018U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr);
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize));
                            VL_STOP_MT("design.sv", 351, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize));
                        VL_STOP_MT("design.sv", 351, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr;
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__18__Vfuncout;
                if (VL_GTS_III(32, 6U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
            if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr)]);
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr);
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr);
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(2U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr))]) 
                              << 0x00000010U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(3U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr))]) 
                              << 0x00000018U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr);
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize));
                            VL_STOP_MT("design.sv", 351, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize));
                        VL_STOP_MT("design.sv", 351, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr;
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__19__Vfuncout;
                if (VL_GTS_III(32, 2U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst 
                    = vlSymsp->TOP__tb__DOT__aif.hburst;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 4U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst));
                                VL_STOP_MT("design.sv", 89, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:89: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst));
                            VL_STOP_MT("design.sv", 89, "");
                        }
                    }
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 8U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    }
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize))) {
                    if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x10U;
                    } else if ((4U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x20U;
                    } else if ((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst))) {
                        vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp = 0x40U;
                    }
                    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                          (((6U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                                            << 2U) 
                                                           | (((4U 
                                                                == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)))))))))) {
                        if ((0U == (((6U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                     << 2U) | (((4U 
                                                 == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)) 
                                                << 1U) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst));
                                VL_STOP_MT("design.sv", 104, "");
                            }
                        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:104: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst));
                            VL_STOP_MT("design.sv", 104, "");
                        }
                    }
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize));
                            VL_STOP_MT("design.sv", 87, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:87: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.boundary", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize));
                        VL_STOP_MT("design.sv", 87, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__boundary__Vstatic__temp;
                vlSelfRef.tb__DOT__dut__DOT__wboundary 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__boundary__20__Vfuncout;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize 
                    = vlSymsp->TOP__tb__DOT__aif.hsize;
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr 
                    = vlSelfRef.tb__DOT__dut__DOT__next_addr;
                if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr)]);
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr);
                } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr);
                } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize))) {
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | vlSelfRef.tb__DOT__dut__DOT__mem
                           [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr)]);
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr))]) 
                              << 8U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(2U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr))]) 
                              << 0x00000010U));
                    vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                        = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                           | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                      [(0x000000ffU 
                                        & ((IData)(3U) 
                                           + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr))]) 
                              << 0x00000018U));
                    vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr 
                        = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr);
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((2U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize)) 
                                                        << 2U) 
                                                       | (((1U 
                                                            == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize)))))))))) {
                    if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize)) 
                                 << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize));
                            VL_STOP_MT("design.sv", 351, "");
                        }
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:351: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.incr_rd", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize));
                        VL_STOP_MT("design.sv", 351, "");
                    }
                }
                vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__Vfuncout 
                    = vlSelfRef.tb__DOT__dut__DOT__incr_rd__Vstatic__raddr;
                vlSelfRef.tb__DOT__dut__DOT__retaddr 
                    = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__incr_rd__21__Vfuncout;
                if (VL_GTS_III(32, 2U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                    vlSelfRef.tb__DOT__dut__DOT__len_count 
                        = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                    vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                }
            }
        } else if ((1U & (IData)(vlSymsp->TOP__tb__DOT__aif.hburst))) {
            vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__hsize 
                = vlSymsp->TOP__tb__DOT__aif.hsize;
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr 
                = vlSelfRef.tb__DOT__dut__DOT__next_addr;
            if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__hsize))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | vlSelfRef.tb__DOT__dut__DOT__mem
                       [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr)]);
            } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__hsize))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | vlSelfRef.tb__DOT__dut__DOT__mem
                       [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr)]);
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(1U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr))]) 
                          << 8U));
            } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__hsize))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | vlSelfRef.tb__DOT__dut__DOT__mem
                       [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr)]);
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(1U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr))]) 
                          << 8U));
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(2U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr))]) 
                          << 0x00000010U));
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(3U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr))]) 
                          << 0x00000018U));
            }
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout 
                = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr;
            vlSelfRef.tb__DOT__dut__DOT__retaddr = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout;
            if (VL_GTS_III(32, 0x00000020U, vlSelfRef.tb__DOT__dut__DOT__len_count)) {
                vlSelfRef.tb__DOT__dut__DOT__len_count 
                    = ((IData)(1U) + vlSelfRef.tb__DOT__dut__DOT__len_count);
                vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
            }
        } else {
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize 
                = vlSymsp->TOP__tb__DOT__aif.hsize;
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr 
                = vlSelfRef.tb__DOT__dut__DOT__next_addr;
            if ((0U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | vlSelfRef.tb__DOT__dut__DOT__mem
                       [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr)]);
            } else if ((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | vlSelfRef.tb__DOT__dut__DOT__mem
                       [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr)]);
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(1U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr))]) 
                          << 8U));
            } else if ((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize))) {
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffffff00U & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | vlSelfRef.tb__DOT__dut__DOT__mem
                       [(0x000000ffU & vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr)]);
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xffff00ffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(1U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr))]) 
                          << 8U));
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0xff00ffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(2U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr))]) 
                          << 0x00000010U));
                vlSelfRef.tb__DOT____Vcellout__dut__hrdata 
                    = ((0x00ffffffU & vlSelfRef.tb__DOT____Vcellout__dut__hrdata) 
                       | ((IData)(vlSelfRef.tb__DOT__dut__DOT__mem
                                  [(0x000000ffU & ((IData)(3U) 
                                                   + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr))]) 
                          << 0x00000018U));
            }
            if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize)))))))))) {
                if ((0U == (((2U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize)) 
                             << 2U) | (((1U == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize)) 
                                        << 1U) | (0U 
                                                  == (IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: design.sv:226: Assertion failed in %m: unique case, but none matched for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.single_tr_rd", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize));
                        VL_STOP_MT("design.sv", 226, "");
                    }
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: design.sv:226: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb.dut.single_tr_rd", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',3,(IData)(vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize));
                    VL_STOP_MT("design.sv", 226, "");
                }
            }
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__Vfuncout 
                = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr;
            vlSelfRef.tb__DOT__dut__DOT__retaddr = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__Vfuncout;
            vlSelfRef.tb__DOT____Vcellout__dut__hready = 1U;
            vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
        }
    }
    vlSymsp->TOP__tb__DOT__aif.hready = vlSelfRef.tb__DOT____Vcellout__dut__hready;
    vlSymsp->TOP__tb__DOT__aif.next_addr = vlSelfRef.tb__DOT__dut__DOT__next_addr;
    vlSymsp->TOP__tb__DOT__aif.hrdata = vlSelfRef.tb__DOT____Vcellout__dut__hrdata;
}

VL_ATTR_COLD void Vdesign___024root___eval_stl(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_stl\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vdesign___024root___stl_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vdesign___024root___eval_phase__stl(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___eval_phase__stl\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdesign___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdesign___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdesign___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vdesign___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vdesign___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vdesign___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb.dut.retaddr)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'ico' trigger - virtual interface member: ahb_if.haddr\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'ico' trigger - virtual interface member: ahb_if.hburst\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: Internal 'ico' trigger - virtual interface member: ahb_if.hresetn\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: Internal 'ico' trigger - virtual interface member: ahb_if.hsel\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: Internal 'ico' trigger - virtual interface member: ahb_if.hsize\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: Internal 'ico' trigger - virtual interface member: ahb_if.htrans\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: Internal 'ico' trigger - virtual interface member: ahb_if.hwdata\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: Internal 'ico' trigger - virtual interface member: ahb_if.hwrite\n");
    }
}
#endif  // VL_DEBUG

bool Vdesign___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdesign___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdesign___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb.dut.retaddr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb.aif.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: ahb_if.haddr\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: ahb_if.hburst\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'act' trigger - virtual interface member: ahb_if.hresetn\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: Internal 'act' trigger - virtual interface member: ahb_if.hsel\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: Internal 'act' trigger - virtual interface member: ahb_if.hsize\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: Internal 'act' trigger - virtual interface member: ahb_if.htrans\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: Internal 'act' trigger - virtual interface member: ahb_if.hwdata\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: Internal 'act' trigger - virtual interface member: ahb_if.hwrite\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdesign___024root___ctor_var_reset(Vdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign___024root___ctor_var_reset\n"); );
    Vdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT____Vcellout__dut__hrdata = 0;
    vlSelf->tb__DOT____Vcellout__dut__hready = 0;
    vlSelf->tb__DOT__dut__DOT__state = 0;
    vlSelf->tb__DOT__dut__DOT__next_state = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__dut__DOT__len_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17292461055262332497ull);
    vlSelf->tb__DOT__dut__DOT__retaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9824363481991841363ull);
    vlSelf->tb__DOT__dut__DOT__next_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2064345596261885062ull);
    vlSelf->tb__DOT__dut__DOT__wboundary = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11280744807426887644ull);
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__2__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__2__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__2__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__3__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__3__hburst = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__3__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__boundary = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__4__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__5__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__5__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__5__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__6__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__6__hburst = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__6__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__boundary = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__7__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__8__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__8__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_wr__8__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__9__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__9__hburst = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__9__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__boundary = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__wrap_wr__10__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__unincr_wr__11__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__single_tr__12__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__single_tr__12__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__single_tr__12__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__13__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__13__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__13__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__14__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__14__hburst = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__14__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__15__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__15__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__15__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__16__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__16__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__16__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__17__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__17__hburst = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__17__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__18__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__18__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__18__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__19__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__19__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__19__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__20__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__20__hburst = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__boundary__20__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__21__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__21__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__incr_rd__21__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__hsize = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__Vfuncout = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__addr = 0;
    vlSelf->__Vfunc_tb__DOT__dut__DOT__single_tr_rd__23__hsize = 0;
    vlSelf->__VnbaEventTrigger = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__haddr = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__hburst = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__hresetn = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsel = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsize = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__htrans = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwdata = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwrite = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__aif__clk__0 = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__haddr = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__hburst = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__hresetn = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__hsel = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__hsize = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__htrans = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__hwdata = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb__DOT__aif__hwrite = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

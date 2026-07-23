// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

VL_ATTR_COLD void VTBdesign___024root___eval_initial__TOP(VTBdesign___024root* vlSelf);
VlCoroutine VTBdesign___024root___eval_initial__TOP__Vtiming__0(VTBdesign___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine VTBdesign___024root___eval_initial__TOP__Vtiming__1(VTBdesign___024root* vlSelf);

void VTBdesign___024root___eval_initial(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_initial\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTBdesign___024root___eval_initial__TOP(vlSelf);
    VTBdesign___024root___eval_initial__TOP__Vtiming__0(vlSelf, std::make_shared<VlProcess>());
    VTBdesign___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine VTBdesign___024root___eval_initial__TOP__Vtiming__0(VTBdesign___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_initial__TOP__Vtiming__0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<VTBdesign___024unit__03a__03aenvironment> tb__DOT__env;
    // Body
    VlProcess::currentp(vlProcess.get());
    tb__DOT__env = VL_NEW(VTBdesign___024unit__03a__03aenvironment, vlSymsp, (&vlSymsp->TOP__tb__DOT__aif));
    VL_NULL_CHECK(VL_NULL_CHECK(tb__DOT__env, "testbench.sv", 1267)
                  ->__PVT__gen, "testbench.sv", 1267)->__PVT__count = 0x0000000aU;
    co_await VL_NULL_CHECK(tb__DOT__env, "testbench.sv", 1268)->__VnoInFunc_run(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine VTBdesign___024root___eval_initial__TOP__Vtiming__1(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_initial__TOP__Vtiming__1\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "testbench.sv", 
                                             1262);
        vlSymsp->TOP__tb__DOT__aif.clk = (1U & (~ (IData)(vlSymsp->TOP__tb__DOT__aif.clk)));
    }
    co_return;
}

void VTBdesign___024root___eval_triggers_vec__ico(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_triggers_vec__ico\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffeffULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hwrite) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwrite)))) 
                                        << 8U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwrite 
        = vlSymsp->TOP__tb__DOT__aif.hwrite;
    vlSelfRef.__VicoTriggered[1U] = ((0xffffffffffffff7fULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                                         != vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwdata))) 
                                        << 7U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hwdata 
        = vlSymsp->TOP__tb__DOT__aif.hwdata;
    vlSelfRef.__VicoTriggered[1U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.htrans) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__htrans)))) 
                                        << 6U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__htrans 
        = vlSymsp->TOP__tb__DOT__aif.htrans;
    vlSelfRef.__VicoTriggered[1U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hsize) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsize)))) 
                                        << 5U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsize 
        = vlSymsp->TOP__tb__DOT__aif.hsize;
    vlSelfRef.__VicoTriggered[1U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hsel) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsel)))) 
                                        << 4U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hsel 
        = vlSymsp->TOP__tb__DOT__aif.hsel;
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hresetn)))) 
                                        << 3U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hresetn 
        = vlSymsp->TOP__tb__DOT__aif.hresetn;
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hburst) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hburst)))) 
                                        << 2U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__hburst 
        = vlSymsp->TOP__tb__DOT__aif.hburst;
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        (vlSymsp->TOP__tb__DOT__aif.haddr 
                                                         != vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__haddr))) 
                                        << 1U));
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb__DOT__aif__haddr 
        = vlSymsp->TOP__tb__DOT__aif.haddr;
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (vlSelfRef.tb__DOT__dut__DOT__retaddr 
                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__0 
        = vlSelfRef.tb__DOT__dut__DOT__retaddr;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
    }
}

bool VTBdesign___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___trigger_anySet__ico\n"); );
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

void VTBdesign___024root___ico_comb__TOP__0(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___ico_comb__TOP__0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
        vlSelfRef.tb__DOT____Vcellout__dut__hready = 0U;
        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
        vlSelfRef.tb__DOT__dut__DOT__first = 0U;
        vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
    } else if ((1U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        if ((((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
              & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
             & (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite))) {
            if ((0x00000100U > vlSymsp->TOP__tb__DOT__aif.haddr)) {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 4U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 1U;
            }
        } else if ((((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
                     & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
                    & (~ (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite)))) {
            if ((0x00000100U > vlSymsp->TOP__tb__DOT__aif.haddr)) {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 4U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
        }
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
            }
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout 
                = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr;
            vlSelfRef.tb__DOT__dut__DOT__retaddr = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout;
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
        }
    }
    vlSymsp->TOP__tb__DOT__aif.hready = vlSelfRef.tb__DOT____Vcellout__dut__hready;
    vlSymsp->TOP__tb__DOT__aif.next_addr = vlSelfRef.tb__DOT__dut__DOT__next_addr;
    vlSymsp->TOP__tb__DOT__aif.hrdata = vlSelfRef.tb__DOT____Vcellout__dut__hrdata;
}

void VTBdesign___024root___eval_ico(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_ico\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0x00000000000001feULL & vlSelfRef.__VicoTriggered[1U]) 
         | (1ULL & vlSelfRef.__VicoTriggered[0U]))) {
        VTBdesign___024root___ico_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTBdesign___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VTBdesign___024root___eval_phase__ico(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_phase__ico\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VTBdesign___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTBdesign___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VTBdesign___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VTBdesign___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTBdesign___024root___eval_triggers_vec__act(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_triggers_vec__act\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffff7fULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hwrite) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hwrite)))) 
                                        << 7U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hwrite 
        = vlSymsp->TOP__tb__DOT__aif.hwrite;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        (vlSymsp->TOP__tb__DOT__aif.hwdata 
                                                         != vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hwdata))) 
                                        << 6U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hwdata 
        = vlSymsp->TOP__tb__DOT__aif.hwdata;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.htrans) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__htrans)))) 
                                        << 5U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__htrans 
        = vlSymsp->TOP__tb__DOT__aif.htrans;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hsize) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hsize)))) 
                                        << 4U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hsize 
        = vlSymsp->TOP__tb__DOT__aif.hsize;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hsel) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hsel)))) 
                                        << 3U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hsel 
        = vlSymsp->TOP__tb__DOT__aif.hsel;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hresetn)))) 
                                        << 2U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hresetn 
        = vlSymsp->TOP__tb__DOT__aif.hresetn;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__tb__DOT__aif.hburst) 
                                                         != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hburst)))) 
                                        << 1U));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__hburst 
        = vlSymsp->TOP__tb__DOT__aif.hburst;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | (IData)((IData)(
                                                       (vlSymsp->TOP__tb__DOT__aif.haddr 
                                                        != vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__haddr))));
    vlSelfRef.__Vtrigprevvif_act_TOP__tb__DOT__aif__haddr 
        = vlSymsp->TOP__tb__DOT__aif.haddr;
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                 (((vlSelfRef.__VdynSched.evaluate() 
                                                    << 3U) 
                                                   | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__tb__DOT__aif.clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__aif__clk__0))) 
                                                      << 1U) 
                                                     | (vlSelfRef.tb__DOT__dut__DOT__retaddr 
                                                        != vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__1))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__dut__DOT__retaddr__1 
        = vlSelfRef.tb__DOT__dut__DOT__retaddr;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__aif__clk__0 
        = vlSymsp->TOP__tb__DOT__aif.clk;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool VTBdesign___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___trigger_anySet__act\n"); );
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

void VTBdesign___024root___act_comb__TOP__0(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___act_comb__TOP__0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
        vlSelfRef.tb__DOT____Vcellout__dut__hready = 0U;
        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
        vlSelfRef.tb__DOT__dut__DOT__first = 0U;
        vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
    } else if ((1U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        if ((((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
              & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
             & (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite))) {
            if ((0x00000100U > vlSymsp->TOP__tb__DOT__aif.haddr)) {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 4U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 1U;
            }
        } else if ((((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
                     & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
                    & (~ (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite)))) {
            if ((0x00000100U > vlSymsp->TOP__tb__DOT__aif.haddr)) {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 4U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
        }
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
            }
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout 
                = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr;
            vlSelfRef.tb__DOT__dut__DOT__retaddr = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout;
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
        }
    }
    vlSymsp->TOP__tb__DOT__aif.hready = vlSelfRef.tb__DOT____Vcellout__dut__hready;
    vlSymsp->TOP__tb__DOT__aif.next_addr = vlSelfRef.tb__DOT__dut__DOT__next_addr;
    vlSymsp->TOP__tb__DOT__aif.hrdata = vlSelfRef.tb__DOT____Vcellout__dut__hrdata;
}

void VTBdesign___024root___eval_act(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_act\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0x00000000000000ffULL & vlSelfRef.__VactTriggered[1U]) 
         | (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        VTBdesign___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void VTBdesign___024root___nba_sequent__TOP__0(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___nba_sequent__TOP__0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__state = ((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn)
                                           ? vlSelfRef.tb__DOT__dut__DOT__next_state
                                           : 0U);
}

void VTBdesign___024root___nba_comb__TOP__0(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___nba_comb__TOP__0\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        vlSelfRef.tb__DOT__dut__DOT__next_state = 1U;
        vlSelfRef.tb__DOT____Vcellout__dut__hready = 0U;
        vlSelfRef.tb__DOT__dut__DOT__len_count = 0U;
        vlSelfRef.tb__DOT__dut__DOT__first = 0U;
        vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
    } else if ((1U == vlSelfRef.tb__DOT__dut__DOT__state)) {
        if ((((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
              & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
             & (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite))) {
            if ((0x00000100U > vlSymsp->TOP__tb__DOT__aif.haddr)) {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 4U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 1U;
            }
        } else if ((((IData)(vlSymsp->TOP__tb__DOT__aif.hresetn) 
                     & (IData)(vlSymsp->TOP__tb__DOT__aif.hsel)) 
                    & (~ (IData)(vlSymsp->TOP__tb__DOT__aif.hwrite)))) {
            if ((0x00000100U > vlSymsp->TOP__tb__DOT__aif.haddr)) {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 4U;
            } else {
                vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 1U;
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__next_state = 0U;
        }
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                    vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(2U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
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
                vlSelfRef.tb__DOT__dut__DOT__unincr_rd__Vstatic__raddr 
                    = ((IData)(4U) + vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr);
            }
            vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout 
                = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__addr;
            vlSelfRef.tb__DOT__dut__DOT__retaddr = vlSelfRef.__Vfunc_tb__DOT__dut__DOT__unincr_rd__22__Vfuncout;
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
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
            vlSelfRef.tb__DOT____Vcellout__dut__hresp = 0U;
        }
    }
    vlSymsp->TOP__tb__DOT__aif.hready = vlSelfRef.tb__DOT____Vcellout__dut__hready;
    vlSymsp->TOP__tb__DOT__aif.next_addr = vlSelfRef.tb__DOT__dut__DOT__next_addr;
    vlSymsp->TOP__tb__DOT__aif.hrdata = vlSelfRef.tb__DOT____Vcellout__dut__hrdata;
}

void VTBdesign___024root___eval_nba(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_nba\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTBdesign___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (((0x00000000000000ffULL & vlSelfRef.__VnbaTriggered[1U]) 
         | (3ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        VTBdesign___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void VTBdesign___024root___timing_resume(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___timing_resume\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdynSched.resume();
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTBdesign___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTBdesign___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VTBdesign___024root___eval_phase__act(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_phase__act\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VTBdesign___024root___eval_triggers_vec__act(vlSelf);
    VTBdesign___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTBdesign___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VTBdesign___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VTBdesign___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VTBdesign___024root___timing_resume(vlSelf);
        VTBdesign___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTBdesign___024root___eval_phase__inact(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_phase__inact\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbench.sv", 1238, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VTBdesign___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool VTBdesign___024root___eval_phase__nba(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_phase__nba\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VTBdesign___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VTBdesign___024root___eval_nba(vlSelf);
        VTBdesign___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void VTBdesign___024root___eval(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VTBdesign___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("testbench.sv", 1238, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VTBdesign___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTBdesign___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbench.sv", 1238, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbench.sv", 1238, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VTBdesign___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbench.sv", 1238, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VTBdesign___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VTBdesign___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VTBdesign___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VTBdesign___024root___eval_debug_assertions(VTBdesign___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTBdesign___024root___eval_debug_assertions\n"); );
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

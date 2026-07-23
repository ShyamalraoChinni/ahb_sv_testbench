// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

void VTBdesign___024unit__03a__03amonitor::init(VTBdesign__Syms* __restrict vlSymsp, VlClassRef<VTBdesign_std__03a__03amailbox__Tz1> mbxms, VlClassRef<VTBdesign_std__03a__03amailbox__Tz2> mbxgm) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__len = 0U;
    this->__PVT__mbxgm = mbxgm;
    this->__PVT__mbxms = mbxms;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_single_tr_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_single_tr_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__1;
    __Vtrigprevexpr_h0eed0184__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__0;
    __Vtrigprevexpr_h0eed0184__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__0;
    __Vtrigprevexpr_hc93c2d75__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_hbb42fa6c__0;
    __VdynTrigger_hbb42fa6c__0 = 0;
    __VdynTrigger_hbb42fa6c__0 = 0U;
    __Vtrigprevexpr_hc93c2d75__0 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 775)
        ->hresetn;
    while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     775);
        __VdynTrigger_hbb42fa6c__0 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 775)
                                      ->hresetn & (~ (IData)(__Vtrigprevexpr_hc93c2d75__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__0);
        __Vtrigprevexpr_hc93c2d75__0 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 775)
            ->hresetn;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(posedge $unit::monitor.aif.hresetn)", 
                                                 "testbench.sv", 
                                                 775);
    CData/*0:0*/ __VdynTrigger_h3512d65d__0;
    __VdynTrigger_h3512d65d__0 = 0;
    __VdynTrigger_h3512d65d__0 = 0U;
    __Vtrigprevexpr_h0eed0184__0 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 776)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     776);
        __VdynTrigger_h3512d65d__0 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 776)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__0);
        __Vtrigprevexpr_h0eed0184__0 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 776)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(posedge $unit::monitor.aif.clk)", 
                                                 "testbench.sv", 
                                                 776);
    VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 778)->__PVT__haddr 
        = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 778)
        ->haddr;
    VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 779)->__PVT__hwdata 
        = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 779)
        ->hwdata;
    VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 780)->__PVT__hwrite = 1U;
    co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 782)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
    VL_WRITEF_NX("MON: single transfer write addr : %0d data %0d\n",2
                 , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 783)
                 ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 783)
                 ->__PVT__hwdata);
    CData/*0:0*/ __VdynTrigger_h3512d65d__1;
    __VdynTrigger_h3512d65d__1 = 0;
    __VdynTrigger_h3512d65d__1 = 0U;
    __Vtrigprevexpr_h0eed0184__1 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 784)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     784);
        __VdynTrigger_h3512d65d__1 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 784)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__1)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__1);
        __Vtrigprevexpr_h0eed0184__1 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 784)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(posedge $unit::monitor.aif.clk)", 
                                                 "testbench.sv", 
                                                 784);
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_single_tr_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_single_tr_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__3;
    __Vtrigprevexpr_h0eed0184__3 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__2;
    __Vtrigprevexpr_h0eed0184__2 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__1;
    __Vtrigprevexpr_hc93c2d75__1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_hbb42fa6c__1;
    __VdynTrigger_hbb42fa6c__1 = 0;
    __VdynTrigger_hbb42fa6c__1 = 0U;
    __Vtrigprevexpr_hc93c2d75__1 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 790)
        ->hresetn;
    while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     790);
        __VdynTrigger_hbb42fa6c__1 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 790)
                                      ->hresetn & (~ (IData)(__Vtrigprevexpr_hc93c2d75__1)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__1);
        __Vtrigprevexpr_hc93c2d75__1 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 790)
            ->hresetn;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(posedge $unit::monitor.aif.hresetn)", 
                                                 "testbench.sv", 
                                                 790);
    CData/*0:0*/ __VdynTrigger_h3512d65d__2;
    __VdynTrigger_h3512d65d__2 = 0;
    __VdynTrigger_h3512d65d__2 = 0U;
    __Vtrigprevexpr_h0eed0184__2 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 791)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     791);
        __VdynTrigger_h3512d65d__2 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 791)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__2)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__2);
        __Vtrigprevexpr_h0eed0184__2 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 791)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(posedge $unit::monitor.aif.clk)", 
                                                 "testbench.sv", 
                                                 791);
    VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 793)->__PVT__haddr 
        = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 793)
        ->haddr;
    VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 794)->__PVT__hrdata 
        = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 794)
        ->hrdata;
    co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 797)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
    VL_WRITEF_NX("MON: single transfer read addr : %0d data %0d\n",2
                 , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 798)
                 ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 798)
                 ->__PVT__hrdata);
    CData/*0:0*/ __VdynTrigger_h3512d65d__3;
    __VdynTrigger_h3512d65d__3 = 0;
    __VdynTrigger_h3512d65d__3 = 0U;
    __Vtrigprevexpr_h0eed0184__3 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 799)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     799);
        __VdynTrigger_h3512d65d__3 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 799)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__3)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__3);
        __Vtrigprevexpr_h0eed0184__3 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 799)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@(posedge $unit::monitor.aif.clk)", 
                                                 "testbench.sv", 
                                                 799);
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_unspec_tr_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_unspec_tr_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__5;
    __Vtrigprevexpr_h0eed0184__5 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__4;
    __Vtrigprevexpr_h0eed0184__4 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__2;
    __Vtrigprevexpr_hc93c2d75__2 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    co_await VL_NULL_CHECK(this->__PVT__mbxgm, "testbench.sv", 805)->__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__temp);
    unnamedblk1_1__DOT____Vrepeat0 = this->__PVT__temp;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__2;
        __VdynTrigger_hbb42fa6c__2 = 0;
        __VdynTrigger_hbb42fa6c__2 = 0U;
        __Vtrigprevexpr_hc93c2d75__2 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 808)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__2)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         808);
            __VdynTrigger_hbb42fa6c__2 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 808)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__2)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__2);
            __Vtrigprevexpr_hc93c2d75__2 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 808)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     808);
        CData/*0:0*/ __VdynTrigger_h3512d65d__4;
        __VdynTrigger_h3512d65d__4 = 0;
        __VdynTrigger_h3512d65d__4 = 0U;
        __Vtrigprevexpr_h0eed0184__4 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 809)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__4)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         809);
            __VdynTrigger_h3512d65d__4 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 809)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__4)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__4);
            __Vtrigprevexpr_h0eed0184__4 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 809)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     809);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 811)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 811)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 812)->__PVT__hwdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 812)
            ->hwdata;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 813)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 815)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: UNSPEC transfer write addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 816)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 816)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__5;
        __VdynTrigger_h3512d65d__5 = 0;
        __VdynTrigger_h3512d65d__5 = 0U;
        __Vtrigprevexpr_h0eed0184__5 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 817)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__5)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         817);
            __VdynTrigger_h3512d65d__5 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 817)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__5)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__5);
            __Vtrigprevexpr_h0eed0184__5 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 817)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     817);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_unspec_tr_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_unspec_tr_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__7;
    __Vtrigprevexpr_h0eed0184__7 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__6;
    __Vtrigprevexpr_h0eed0184__6 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__3;
    __Vtrigprevexpr_hc93c2d75__3 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    co_await VL_NULL_CHECK(this->__PVT__mbxgm, "testbench.sv", 823)->__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__temp);
    unnamedblk1_2__DOT____Vrepeat1 = this->__PVT__temp;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__3;
        __VdynTrigger_hbb42fa6c__3 = 0;
        __VdynTrigger_hbb42fa6c__3 = 0U;
        __Vtrigprevexpr_hc93c2d75__3 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 826)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__3)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         826);
            __VdynTrigger_hbb42fa6c__3 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 826)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__3)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__3);
            __Vtrigprevexpr_hc93c2d75__3 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 826)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     826);
        CData/*0:0*/ __VdynTrigger_h3512d65d__6;
        __VdynTrigger_h3512d65d__6 = 0;
        __VdynTrigger_h3512d65d__6 = 0U;
        __Vtrigprevexpr_h0eed0184__6 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 827)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__6)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         827);
            __VdynTrigger_h3512d65d__6 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 827)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__6)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__6);
            __Vtrigprevexpr_h0eed0184__6 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 827)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     827);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 829)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 829)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 830)->__PVT__hrdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 830)
            ->hrdata;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 833)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: UNSPEC INCR transfer read addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 834)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 834)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__7;
        __VdynTrigger_h3512d65d__7 = 0;
        __VdynTrigger_h3512d65d__7 = 0U;
        __Vtrigprevexpr_h0eed0184__7 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 835)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__7)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         835);
            __VdynTrigger_h3512d65d__7 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 835)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__7)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__7);
            __Vtrigprevexpr_h0eed0184__7 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 835)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     835);
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr4_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr4_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__9;
    __Vtrigprevexpr_h0eed0184__9 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__8;
    __Vtrigprevexpr_h0eed0184__8 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__4;
    __Vtrigprevexpr_hc93c2d75__4 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    unnamedblk1_3__DOT____Vrepeat2 = 3U;
    while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__4;
        __VdynTrigger_hbb42fa6c__4 = 0;
        __VdynTrigger_hbb42fa6c__4 = 0U;
        __Vtrigprevexpr_hc93c2d75__4 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 845)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__4)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         845);
            __VdynTrigger_hbb42fa6c__4 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 845)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__4)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__4);
            __Vtrigprevexpr_hc93c2d75__4 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 845)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     845);
        CData/*0:0*/ __VdynTrigger_h3512d65d__8;
        __VdynTrigger_h3512d65d__8 = 0;
        __VdynTrigger_h3512d65d__8 = 0U;
        __Vtrigprevexpr_h0eed0184__8 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 846)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__8)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         846);
            __VdynTrigger_h3512d65d__8 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 846)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__8)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__8);
            __Vtrigprevexpr_h0eed0184__8 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 846)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     846);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 848)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 848)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 849)->__PVT__hwdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 849)
            ->hwdata;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 850)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 852)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: INCR 4 beats write addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 853)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 853)
                     ->__PVT__hwdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__9;
        __VdynTrigger_h3512d65d__9 = 0;
        __VdynTrigger_h3512d65d__9 = 0U;
        __Vtrigprevexpr_h0eed0184__9 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 854)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__9)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         854);
            __VdynTrigger_h3512d65d__9 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 854)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h0eed0184__9)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__9);
            __Vtrigprevexpr_h0eed0184__9 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 854)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     854);
        unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr4_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr4_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__11;
    __Vtrigprevexpr_h0eed0184__11 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__10;
    __Vtrigprevexpr_h0eed0184__10 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__5;
    __Vtrigprevexpr_hc93c2d75__5 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk1_4__DOT____Vrepeat3 = 0;
    unnamedblk1_4__DOT____Vrepeat3 = 3U;
    while (VL_LTS_III(32, 0U, unnamedblk1_4__DOT____Vrepeat3)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__5;
        __VdynTrigger_hbb42fa6c__5 = 0;
        __VdynTrigger_hbb42fa6c__5 = 0U;
        __Vtrigprevexpr_hc93c2d75__5 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 863)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__5)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         863);
            __VdynTrigger_hbb42fa6c__5 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 863)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__5)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__5);
            __Vtrigprevexpr_hc93c2d75__5 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 863)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     863);
        CData/*0:0*/ __VdynTrigger_h3512d65d__10;
        __VdynTrigger_h3512d65d__10 = 0;
        __VdynTrigger_h3512d65d__10 = 0U;
        __Vtrigprevexpr_h0eed0184__10 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 864)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__10)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         864);
            __VdynTrigger_h3512d65d__10 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 864)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__10)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__10);
            __Vtrigprevexpr_h0eed0184__10 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 864)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     864);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 866)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 866)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 867)->__PVT__hrdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 867)
            ->hrdata;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 870)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: INCR 4 beats read addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 871)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 871)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__11;
        __VdynTrigger_h3512d65d__11 = 0;
        __VdynTrigger_h3512d65d__11 = 0U;
        __Vtrigprevexpr_h0eed0184__11 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 872)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__11)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         872);
            __VdynTrigger_h3512d65d__11 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 872)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__11)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__11);
            __Vtrigprevexpr_h0eed0184__11 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 872)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     872);
        unnamedblk1_4__DOT____Vrepeat3 = (unnamedblk1_4__DOT____Vrepeat3 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr8_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr8_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__13;
    __Vtrigprevexpr_h0eed0184__13 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__12;
    __Vtrigprevexpr_h0eed0184__12 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__6;
    __Vtrigprevexpr_hc93c2d75__6 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_5__DOT____Vrepeat4;
    unnamedblk1_5__DOT____Vrepeat4 = 0;
    unnamedblk1_5__DOT____Vrepeat4 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_5__DOT____Vrepeat4)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__6;
        __VdynTrigger_hbb42fa6c__6 = 0;
        __VdynTrigger_hbb42fa6c__6 = 0U;
        __Vtrigprevexpr_hc93c2d75__6 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 880)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__6)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         880);
            __VdynTrigger_hbb42fa6c__6 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 880)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__6)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__6);
            __Vtrigprevexpr_hc93c2d75__6 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 880)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     880);
        CData/*0:0*/ __VdynTrigger_h3512d65d__12;
        __VdynTrigger_h3512d65d__12 = 0;
        __VdynTrigger_h3512d65d__12 = 0U;
        __Vtrigprevexpr_h0eed0184__12 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 881)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__12)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         881);
            __VdynTrigger_h3512d65d__12 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 881)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__12)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__12);
            __Vtrigprevexpr_h0eed0184__12 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 881)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     881);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 883)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 883)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 884)->__PVT__hwdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 884)
            ->hwdata;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 885)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 887)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: INCR 8 beats write addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 888)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 888)
                     ->__PVT__hwdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__13;
        __VdynTrigger_h3512d65d__13 = 0;
        __VdynTrigger_h3512d65d__13 = 0U;
        __Vtrigprevexpr_h0eed0184__13 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 889)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__13)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         889);
            __VdynTrigger_h3512d65d__13 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 889)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__13)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__13);
            __Vtrigprevexpr_h0eed0184__13 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 889)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     889);
        unnamedblk1_5__DOT____Vrepeat4 = (unnamedblk1_5__DOT____Vrepeat4 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr8_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr8_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__15;
    __Vtrigprevexpr_h0eed0184__15 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__14;
    __Vtrigprevexpr_h0eed0184__14 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__7;
    __Vtrigprevexpr_hc93c2d75__7 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_6__DOT____Vrepeat5;
    unnamedblk1_6__DOT____Vrepeat5 = 0;
    unnamedblk1_6__DOT____Vrepeat5 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_6__DOT____Vrepeat5)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__7;
        __VdynTrigger_hbb42fa6c__7 = 0;
        __VdynTrigger_hbb42fa6c__7 = 0U;
        __Vtrigprevexpr_hc93c2d75__7 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 898)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__7)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         898);
            __VdynTrigger_hbb42fa6c__7 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 898)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__7)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__7);
            __Vtrigprevexpr_hc93c2d75__7 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 898)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     898);
        CData/*0:0*/ __VdynTrigger_h3512d65d__14;
        __VdynTrigger_h3512d65d__14 = 0;
        __VdynTrigger_h3512d65d__14 = 0U;
        __Vtrigprevexpr_h0eed0184__14 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 899)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__14)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         899);
            __VdynTrigger_h3512d65d__14 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 899)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__14)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__14);
            __Vtrigprevexpr_h0eed0184__14 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 899)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     899);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 901)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 901)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 902)->__PVT__hrdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 902)
            ->hrdata;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 905)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: INCR 8 beats read addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 906)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 906)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__15;
        __VdynTrigger_h3512d65d__15 = 0;
        __VdynTrigger_h3512d65d__15 = 0U;
        __Vtrigprevexpr_h0eed0184__15 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 907)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__15)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         907);
            __VdynTrigger_h3512d65d__15 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 907)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__15)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__15);
            __Vtrigprevexpr_h0eed0184__15 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 907)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     907);
        unnamedblk1_6__DOT____Vrepeat5 = (unnamedblk1_6__DOT____Vrepeat5 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr16_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr16_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__17;
    __Vtrigprevexpr_h0eed0184__17 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__16;
    __Vtrigprevexpr_h0eed0184__16 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__8;
    __Vtrigprevexpr_hc93c2d75__8 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_7__DOT____Vrepeat6;
    unnamedblk1_7__DOT____Vrepeat6 = 0;
    unnamedblk1_7__DOT____Vrepeat6 = 0x00000010U;
    while (VL_LTS_III(32, 0U, unnamedblk1_7__DOT____Vrepeat6)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__8;
        __VdynTrigger_hbb42fa6c__8 = 0;
        __VdynTrigger_hbb42fa6c__8 = 0U;
        __Vtrigprevexpr_hc93c2d75__8 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 917)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__8)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         917);
            __VdynTrigger_hbb42fa6c__8 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 917)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__8)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__8);
            __Vtrigprevexpr_hc93c2d75__8 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 917)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     917);
        CData/*0:0*/ __VdynTrigger_h3512d65d__16;
        __VdynTrigger_h3512d65d__16 = 0;
        __VdynTrigger_h3512d65d__16 = 0U;
        __Vtrigprevexpr_h0eed0184__16 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 918)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__16)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         918);
            __VdynTrigger_h3512d65d__16 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 918)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__16)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__16);
            __Vtrigprevexpr_h0eed0184__16 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 918)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     918);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 920)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 920)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 921)->__PVT__hwdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 921)
            ->hwdata;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 922)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 924)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: INCR 16 beats write addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 925)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 925)
                     ->__PVT__hwdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__17;
        __VdynTrigger_h3512d65d__17 = 0;
        __VdynTrigger_h3512d65d__17 = 0U;
        __Vtrigprevexpr_h0eed0184__17 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 926)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__17)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         926);
            __VdynTrigger_h3512d65d__17 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 926)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__17)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__17);
            __Vtrigprevexpr_h0eed0184__17 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 926)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     926);
        unnamedblk1_7__DOT____Vrepeat6 = (unnamedblk1_7__DOT____Vrepeat6 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr16_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_incr16_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__19;
    __Vtrigprevexpr_h0eed0184__19 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__18;
    __Vtrigprevexpr_h0eed0184__18 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__9;
    __Vtrigprevexpr_hc93c2d75__9 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_8__DOT____Vrepeat7;
    unnamedblk1_8__DOT____Vrepeat7 = 0;
    unnamedblk1_8__DOT____Vrepeat7 = 0x00000010U;
    while (VL_LTS_III(32, 0U, unnamedblk1_8__DOT____Vrepeat7)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__9;
        __VdynTrigger_hbb42fa6c__9 = 0;
        __VdynTrigger_hbb42fa6c__9 = 0U;
        __Vtrigprevexpr_hc93c2d75__9 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 935)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__9)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         935);
            __VdynTrigger_hbb42fa6c__9 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 935)
                                          ->hresetn 
                                          & (~ (IData)(__Vtrigprevexpr_hc93c2d75__9)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__9);
            __Vtrigprevexpr_hc93c2d75__9 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 935)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     935);
        CData/*0:0*/ __VdynTrigger_h3512d65d__18;
        __VdynTrigger_h3512d65d__18 = 0;
        __VdynTrigger_h3512d65d__18 = 0U;
        __Vtrigprevexpr_h0eed0184__18 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 936)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__18)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         936);
            __VdynTrigger_h3512d65d__18 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 936)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__18)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__18);
            __Vtrigprevexpr_h0eed0184__18 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 936)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     936);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 938)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 938)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 939)->__PVT__hrdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 939)
            ->hrdata;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 942)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: INCR 16 beats read addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 943)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 943)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__19;
        __VdynTrigger_h3512d65d__19 = 0;
        __VdynTrigger_h3512d65d__19 = 0U;
        __Vtrigprevexpr_h0eed0184__19 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 944)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__19)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         944);
            __VdynTrigger_h3512d65d__19 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 944)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__19)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__19);
            __Vtrigprevexpr_h0eed0184__19 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 944)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     944);
        unnamedblk1_8__DOT____Vrepeat7 = (unnamedblk1_8__DOT____Vrepeat7 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap4_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap4_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__21;
    __Vtrigprevexpr_h0eed0184__21 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__20;
    __Vtrigprevexpr_h0eed0184__20 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__10;
    __Vtrigprevexpr_hc93c2d75__10 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_9__DOT____Vrepeat8;
    unnamedblk1_9__DOT____Vrepeat8 = 0;
    unnamedblk1_9__DOT____Vrepeat8 = 4U;
    while (VL_LTS_III(32, 0U, unnamedblk1_9__DOT____Vrepeat8)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__10;
        __VdynTrigger_hbb42fa6c__10 = 0;
        __VdynTrigger_hbb42fa6c__10 = 0U;
        __Vtrigprevexpr_hc93c2d75__10 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 954)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__10)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         954);
            __VdynTrigger_hbb42fa6c__10 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 954)
                                           ->hresetn 
                                           & (~ (IData)(__Vtrigprevexpr_hc93c2d75__10)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__10);
            __Vtrigprevexpr_hc93c2d75__10 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 954)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     954);
        CData/*0:0*/ __VdynTrigger_h3512d65d__20;
        __VdynTrigger_h3512d65d__20 = 0;
        __VdynTrigger_h3512d65d__20 = 0U;
        __Vtrigprevexpr_h0eed0184__20 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 955)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__20)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         955);
            __VdynTrigger_h3512d65d__20 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 955)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__20)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__20);
            __Vtrigprevexpr_h0eed0184__20 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 955)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     955);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 957)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 957)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 958)->__PVT__hwdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 958)
            ->hwdata;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 959)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 961)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: WRAP 4 beats write addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 962)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 962)
                     ->__PVT__hwdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__21;
        __VdynTrigger_h3512d65d__21 = 0;
        __VdynTrigger_h3512d65d__21 = 0U;
        __Vtrigprevexpr_h0eed0184__21 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 963)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__21)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         963);
            __VdynTrigger_h3512d65d__21 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 963)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__21)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__21);
            __Vtrigprevexpr_h0eed0184__21 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 963)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     963);
        unnamedblk1_9__DOT____Vrepeat8 = (unnamedblk1_9__DOT____Vrepeat8 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap4_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap4_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__23;
    __Vtrigprevexpr_h0eed0184__23 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__22;
    __Vtrigprevexpr_h0eed0184__22 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__11;
    __Vtrigprevexpr_hc93c2d75__11 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_10__DOT____Vrepeat9;
    unnamedblk1_10__DOT____Vrepeat9 = 0;
    unnamedblk1_10__DOT____Vrepeat9 = 4U;
    while (VL_LTS_III(32, 0U, unnamedblk1_10__DOT____Vrepeat9)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__11;
        __VdynTrigger_hbb42fa6c__11 = 0;
        __VdynTrigger_hbb42fa6c__11 = 0U;
        __Vtrigprevexpr_hc93c2d75__11 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 972)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__11)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         972);
            __VdynTrigger_hbb42fa6c__11 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 972)
                                           ->hresetn 
                                           & (~ (IData)(__Vtrigprevexpr_hc93c2d75__11)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__11);
            __Vtrigprevexpr_hc93c2d75__11 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 972)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     972);
        CData/*0:0*/ __VdynTrigger_h3512d65d__22;
        __VdynTrigger_h3512d65d__22 = 0;
        __VdynTrigger_h3512d65d__22 = 0U;
        __Vtrigprevexpr_h0eed0184__22 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 973)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__22)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         973);
            __VdynTrigger_h3512d65d__22 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 973)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__22)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__22);
            __Vtrigprevexpr_h0eed0184__22 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 973)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     973);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 975)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 975)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 976)->__PVT__hrdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 976)
            ->hrdata;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 979)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: WRAP 4 beats read addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 980)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 980)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__23;
        __VdynTrigger_h3512d65d__23 = 0;
        __VdynTrigger_h3512d65d__23 = 0U;
        __Vtrigprevexpr_h0eed0184__23 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 981)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__23)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         981);
            __VdynTrigger_h3512d65d__23 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 981)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__23)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__23);
            __Vtrigprevexpr_h0eed0184__23 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 981)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     981);
        unnamedblk1_10__DOT____Vrepeat9 = (unnamedblk1_10__DOT____Vrepeat9 
                                           - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap8_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap8_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__25;
    __Vtrigprevexpr_h0eed0184__25 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__24;
    __Vtrigprevexpr_h0eed0184__24 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__12;
    __Vtrigprevexpr_hc93c2d75__12 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_11__DOT____Vrepeat10;
    unnamedblk1_11__DOT____Vrepeat10 = 0;
    unnamedblk1_11__DOT____Vrepeat10 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_11__DOT____Vrepeat10)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__12;
        __VdynTrigger_hbb42fa6c__12 = 0;
        __VdynTrigger_hbb42fa6c__12 = 0U;
        __Vtrigprevexpr_hc93c2d75__12 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 990)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__12)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         990);
            __VdynTrigger_hbb42fa6c__12 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 990)
                                           ->hresetn 
                                           & (~ (IData)(__Vtrigprevexpr_hc93c2d75__12)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__12);
            __Vtrigprevexpr_hc93c2d75__12 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 990)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     990);
        CData/*0:0*/ __VdynTrigger_h3512d65d__24;
        __VdynTrigger_h3512d65d__24 = 0;
        __VdynTrigger_h3512d65d__24 = 0U;
        __Vtrigprevexpr_h0eed0184__24 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 991)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__24)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         991);
            __VdynTrigger_h3512d65d__24 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 991)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__24)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__24);
            __Vtrigprevexpr_h0eed0184__24 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 991)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     991);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 993)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 993)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 994)->__PVT__hwdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 994)
            ->hwdata;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 995)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 997)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: WRAP 8 beats write addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 998)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 998)
                     ->__PVT__hwdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__25;
        __VdynTrigger_h3512d65d__25 = 0;
        __VdynTrigger_h3512d65d__25 = 0U;
        __Vtrigprevexpr_h0eed0184__25 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 999)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__25)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         999);
            __VdynTrigger_h3512d65d__25 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 999)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__25)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__25);
            __Vtrigprevexpr_h0eed0184__25 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 999)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     999);
        unnamedblk1_11__DOT____Vrepeat10 = (unnamedblk1_11__DOT____Vrepeat10 
                                            - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap8_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap8_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__27;
    __Vtrigprevexpr_h0eed0184__27 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__26;
    __Vtrigprevexpr_h0eed0184__26 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__13;
    __Vtrigprevexpr_hc93c2d75__13 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_12__DOT____Vrepeat11;
    unnamedblk1_12__DOT____Vrepeat11 = 0;
    unnamedblk1_12__DOT____Vrepeat11 = 8U;
    while (VL_LTS_III(32, 0U, unnamedblk1_12__DOT____Vrepeat11)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__13;
        __VdynTrigger_hbb42fa6c__13 = 0;
        __VdynTrigger_hbb42fa6c__13 = 0U;
        __Vtrigprevexpr_hc93c2d75__13 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1008)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__13)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         1008);
            __VdynTrigger_hbb42fa6c__13 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1008)
                                           ->hresetn 
                                           & (~ (IData)(__Vtrigprevexpr_hc93c2d75__13)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__13);
            __Vtrigprevexpr_hc93c2d75__13 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1008)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     1008);
        CData/*0:0*/ __VdynTrigger_h3512d65d__26;
        __VdynTrigger_h3512d65d__26 = 0;
        __VdynTrigger_h3512d65d__26 = 0U;
        __Vtrigprevexpr_h0eed0184__26 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1009)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__26)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         1009);
            __VdynTrigger_h3512d65d__26 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1009)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__26)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__26);
            __Vtrigprevexpr_h0eed0184__26 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1009)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     1009);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1011)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1011)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1012)->__PVT__hrdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1012)
            ->hrdata;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 1015)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: WRAP 8 beats read addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1016)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1016)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__27;
        __VdynTrigger_h3512d65d__27 = 0;
        __VdynTrigger_h3512d65d__27 = 0U;
        __Vtrigprevexpr_h0eed0184__27 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1017)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__27)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         1017);
            __VdynTrigger_h3512d65d__27 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1017)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__27)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__27);
            __Vtrigprevexpr_h0eed0184__27 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1017)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     1017);
        unnamedblk1_12__DOT____Vrepeat11 = (unnamedblk1_12__DOT____Vrepeat11 
                                            - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap16_wr(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap16_wr\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__29;
    __Vtrigprevexpr_h0eed0184__29 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__28;
    __Vtrigprevexpr_h0eed0184__28 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__14;
    __Vtrigprevexpr_hc93c2d75__14 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_13__DOT____Vrepeat12;
    unnamedblk1_13__DOT____Vrepeat12 = 0;
    unnamedblk1_13__DOT____Vrepeat12 = 0x00000010U;
    while (VL_LTS_III(32, 0U, unnamedblk1_13__DOT____Vrepeat12)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__14;
        __VdynTrigger_hbb42fa6c__14 = 0;
        __VdynTrigger_hbb42fa6c__14 = 0U;
        __Vtrigprevexpr_hc93c2d75__14 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1025)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__14)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         1025);
            __VdynTrigger_hbb42fa6c__14 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1025)
                                           ->hresetn 
                                           & (~ (IData)(__Vtrigprevexpr_hc93c2d75__14)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__14);
            __Vtrigprevexpr_hc93c2d75__14 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1025)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     1025);
        CData/*0:0*/ __VdynTrigger_h3512d65d__28;
        __VdynTrigger_h3512d65d__28 = 0;
        __VdynTrigger_h3512d65d__28 = 0U;
        __Vtrigprevexpr_h0eed0184__28 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1026)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__28)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         1026);
            __VdynTrigger_h3512d65d__28 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1026)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__28)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__28);
            __Vtrigprevexpr_h0eed0184__28 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1026)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     1026);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1028)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1028)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1029)->__PVT__hwdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1029)
            ->hwdata;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1030)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 1032)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: WRAP 16 beats write addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1033)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1033)
                     ->__PVT__hwdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__29;
        __VdynTrigger_h3512d65d__29 = 0;
        __VdynTrigger_h3512d65d__29 = 0U;
        __Vtrigprevexpr_h0eed0184__29 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1034)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__29)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         1034);
            __VdynTrigger_h3512d65d__29 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1034)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__29)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__29);
            __Vtrigprevexpr_h0eed0184__29 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1034)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     1034);
        unnamedblk1_13__DOT____Vrepeat12 = (unnamedblk1_13__DOT____Vrepeat12 
                                            - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap16_rd(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_wrap16_rd\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__31;
    __Vtrigprevexpr_h0eed0184__31 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__30;
    __Vtrigprevexpr_h0eed0184__30 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hc93c2d75__15;
    __Vtrigprevexpr_hc93c2d75__15 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_14__DOT____Vrepeat13;
    unnamedblk1_14__DOT____Vrepeat13 = 0;
    unnamedblk1_14__DOT____Vrepeat13 = 0x00000010U;
    while (VL_LTS_III(32, 0U, unnamedblk1_14__DOT____Vrepeat13)) {
        CData/*0:0*/ __VdynTrigger_hbb42fa6c__15;
        __VdynTrigger_hbb42fa6c__15 = 0;
        __VdynTrigger_hbb42fa6c__15 = 0U;
        __Vtrigprevexpr_hc93c2d75__15 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1044)
            ->hresetn;
        while ((1U & (~ (IData)(__VdynTrigger_hbb42fa6c__15)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.hresetn)", 
                                                         "testbench.sv", 
                                                         1044);
            __VdynTrigger_hbb42fa6c__15 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1044)
                                           ->hresetn 
                                           & (~ (IData)(__Vtrigprevexpr_hc93c2d75__15)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbb42fa6c__15);
            __Vtrigprevexpr_hc93c2d75__15 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1044)
                ->hresetn;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.hresetn)", 
                                                     "testbench.sv", 
                                                     1044);
        CData/*0:0*/ __VdynTrigger_h3512d65d__30;
        __VdynTrigger_h3512d65d__30 = 0;
        __VdynTrigger_h3512d65d__30 = 0U;
        __Vtrigprevexpr_h0eed0184__30 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1045)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__30)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         1045);
            __VdynTrigger_h3512d65d__30 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1045)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__30)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__30);
            __Vtrigprevexpr_h0eed0184__30 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1045)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     1045);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1047)->__PVT__haddr 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1047)
            ->next_addr;
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1048)->__PVT__hrdata 
            = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1048)
            ->hrdata;
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 1051)->__VnoInFunc_put(vlProcess, vlSymsp, this->__PVT__tr);
        VL_WRITEF_NX("MON: WRAP 16 beats read addr : %0d data %0d\n",2
                     , '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1052)
                     ->__PVT__haddr, '#',32,VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1052)
                     ->__PVT__hrdata);
        CData/*0:0*/ __VdynTrigger_h3512d65d__31;
        __VdynTrigger_h3512d65d__31 = 0;
        __VdynTrigger_h3512d65d__31 = 0U;
        __Vtrigprevexpr_h0eed0184__31 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1053)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__31)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         1053);
            __VdynTrigger_h3512d65d__31 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1053)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__31)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__31);
            __Vtrigprevexpr_h0eed0184__31 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1053)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     1053);
        unnamedblk1_14__DOT____Vrepeat13 = (unnamedblk1_14__DOT____Vrepeat13 
                                            - (IData)(1U));
    }
    co_return;
}

VlCoroutine VTBdesign___024unit__03a__03amonitor::__VnoInFunc_run(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0eed0184__32;
    __Vtrigprevexpr_h0eed0184__32 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    this->__PVT__tr = VL_NEW(VTBdesign___024unit__03a__03atransaction, vlSymsp);
    while (true) {
        CData/*0:0*/ __VdynTrigger_h3512d65d__32;
        __VdynTrigger_h3512d65d__32 = 0;
        __VdynTrigger_h3512d65d__32 = 0U;
        __Vtrigprevexpr_h0eed0184__32 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1062)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3512d65d__32)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::monitor.aif.clk)", 
                                                         "testbench.sv", 
                                                         1062);
            __VdynTrigger_h3512d65d__32 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1062)
                                           ->clk & 
                                           (~ (IData)(__Vtrigprevexpr_h0eed0184__32)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3512d65d__32);
            __Vtrigprevexpr_h0eed0184__32 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1062)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::monitor.aif.clk)", 
                                                     "testbench.sv", 
                                                     1062);
        if (((VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1064)
              ->hresetn && VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1064)
              ->hsel) && VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1064)
             ->hwrite)) {
            if ((4U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1065)
                 ->hburst)) {
                if ((2U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1065)
                     ->hburst)) {
                    if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1065)
                         ->hburst)) {
                        co_await this->__VnoInFunc_incr16_wr(vlProcess, vlSymsp);
                    } else {
                        co_await this->__VnoInFunc_wrap16_wr(vlProcess, vlSymsp);
                    }
                } else if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1065)
                            ->hburst)) {
                    co_await this->__VnoInFunc_incr8_wr(vlProcess, vlSymsp);
                } else {
                    co_await this->__VnoInFunc_wrap8_wr(vlProcess, vlSymsp);
                }
            } else if ((2U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1065)
                        ->hburst)) {
                if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1065)
                     ->hburst)) {
                    co_await this->__VnoInFunc_incr4_wr(vlProcess, vlSymsp);
                } else {
                    co_await this->__VnoInFunc_wrap4_wr(vlProcess, vlSymsp);
                }
            } else if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1065)
                        ->hburst)) {
                co_await this->__VnoInFunc_unspec_tr_wr(vlProcess, vlSymsp);
            } else {
                co_await this->__VnoInFunc_single_tr_wr(vlProcess, vlSymsp);
            }
        }
        if (((VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1077)
              ->hresetn && VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1077)
              ->hsel) && (1U & (~ VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1077)
                                ->hwrite)))) {
            if ((4U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1078)
                 ->hburst)) {
                if ((2U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1078)
                     ->hburst)) {
                    if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1078)
                         ->hburst)) {
                        co_await this->__VnoInFunc_incr16_rd(vlProcess, vlSymsp);
                    } else {
                        co_await this->__VnoInFunc_wrap16_rd(vlProcess, vlSymsp);
                    }
                } else if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1078)
                            ->hburst)) {
                    co_await this->__VnoInFunc_incr8_rd(vlProcess, vlSymsp);
                } else {
                    co_await this->__VnoInFunc_wrap8_rd(vlProcess, vlSymsp);
                }
            } else if ((2U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1078)
                        ->hburst)) {
                if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1078)
                     ->hburst)) {
                    co_await this->__VnoInFunc_incr4_rd(vlProcess, vlSymsp);
                } else {
                    co_await this->__VnoInFunc_wrap4_rd(vlProcess, vlSymsp);
                }
            } else if ((1U & VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1078)
                        ->hburst)) {
                co_await this->__VnoInFunc_unspec_tr_rd(vlProcess, vlSymsp);
            } else {
                co_await this->__VnoInFunc_single_tr_rd(vlProcess, vlSymsp);
            }
        }
    }
    co_return;
}

void VTBdesign___024unit__03a__03amonitor::_ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__aif = nullptr;
    __PVT__temp = 0;
}

std::string VTBdesign___024unit__03a__03amonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string VTBdesign___024unit__03a__03amonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign___024unit__03a__03amonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", aif:" + VL_TO_STRING(__PVT__aif);
    out += ", mbxgm:" + VL_TO_STRING(__PVT__mbxgm);
    out += ", mbxms:" + VL_TO_STRING(__PVT__mbxms);
    out += ", len:" + VL_TO_STRING(__PVT__len);
    out += ", temp:" + VL_TO_STRING(__PVT__temp);
    return (out);
}

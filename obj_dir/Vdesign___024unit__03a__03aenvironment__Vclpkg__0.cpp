// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

void Vdesign___024unit__03a__03aenvironment::init(Vdesign__Syms* __restrict vlSymsp, Vdesign_ahb_if* aif) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mbxgd = VL_NEW(Vdesign_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__mbxms = VL_NEW(Vdesign_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__mbxgm = VL_NEW(Vdesign_std__03a__03amailbox__Tz2, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vdesign___024unit__03a__03agenerator, vlSymsp, this->__PVT__mbxgd, this->__PVT__mbxgm);
    this->__PVT__drv = VL_NEW(Vdesign___024unit__03a__03adriver, vlSymsp, this->__PVT__mbxgd);
    this->__PVT__mon = VL_NEW(Vdesign___024unit__03a__03amonitor, vlSymsp, this->__PVT__mbxms, this->__PVT__mbxgm);
    this->__PVT__sco = VL_NEW(Vdesign___024unit__03a__03ascoreboard, vlSymsp, this->__PVT__mbxms);
    this->__PVT__aif = aif;
    VL_NULL_CHECK(this->__PVT__drv, "testbench.sv", 1182)->__PVT__aif 
        = aif;
    VL_NULL_CHECK(this->__PVT__mon, "testbench.sv", 1183)->__PVT__aif 
        = aif;
    VL_NULL_CHECK(this->__PVT__drv, "testbench.sv", 1185)->__PVT__drvnext 
        = this->__PVT__nextgd;
    VL_NULL_CHECK(this->__PVT__gen, "testbench.sv", 1186)->__PVT__drvnext 
        = this->__PVT__nextgd;
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_pre_test(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_pre_test\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__drv, "testbench.sv", 1196)->__VnoInFunc_reset(vlProcess, vlSymsp);
    co_return;
}

void Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_test____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    this->__VnoInFunc_test____Vfork_1__1(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    this->__VnoInFunc_test____Vfork_1__2(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    this->__VnoInFunc_test____Vfork_1__3(std::make_shared<VlProcess>(vlProcess), vlSymsp);
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__3(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__3\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "testbench.sv", 
                                            1201);
    co_await VL_NULL_CHECK(this->__PVT__sco, "testbench.sv", 1205)->__VnoInFunc_run(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__2(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__2\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "testbench.sv", 
                                            1201);
    co_await VL_NULL_CHECK(this->__PVT__mon, "testbench.sv", 1204)->__VnoInFunc_run(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__1(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "testbench.sv", 
                                            1201);
    co_await VL_NULL_CHECK(this->__PVT__drv, "testbench.sv", 1203)->__VnoInFunc_run(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_test____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "testbench.sv", 
                                            1201);
    co_await VL_NULL_CHECK(this->__PVT__gen, "testbench.sv", 1202)->__VnoInFunc_run(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_post_test(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_post_test\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h03f8e675__0;
    __Vtrigprevexpr_h03f8e675__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlForkSync __Vfork_2__sync;
    __Vfork_2__sync.init(1U, vlProcess);
    this->__VnoInFunc_post_test____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync);
    co_await __Vfork_2__sync.join(vlProcess, "testbench.sv", 
                                  1211);
    vlProcess->disableFork();
    unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_h0206b56c__0;
        __VdynTrigger_h0206b56c__0 = 0;
        __VdynTrigger_h0206b56c__0 = 0U;
        __Vtrigprevexpr_h03f8e675__0 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1222)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h0206b56c__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::environment.aif.clk)", 
                                                         "testbench.sv", 
                                                         1222);
            __VdynTrigger_h0206b56c__0 = (VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1222)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h03f8e675__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0206b56c__0);
            __Vtrigprevexpr_h03f8e675__0 = VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 1222)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::environment.aif.clk)", 
                                                     "testbench.sv", 
                                                     1222);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    vlProcess->disableFork();
    VL_FINISH_MT("testbench.sv", 1223, "");
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_post_test____Vfork_2__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_post_test____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_2__sync.onKill(vlProcess);
    if ((1U & (~ VL_NULL_CHECK(this->__PVT__gen, "testbench.sv", 1213)
               ->__PVT__done.isTriggered()))) {
        CData/*0:0*/ __VdynTrigger_h9a860ec0__0;
        __VdynTrigger_h9a860ec0__0 = 0;
        __VdynTrigger_h9a860ec0__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h9a860ec0__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] $unit::environment.gen.done.isTriggered())", 
                                                         "testbench.sv", 
                                                         1213);
            __VdynTrigger_h9a860ec0__0 = VL_NULL_CHECK(this->__PVT__gen, "testbench.sv", 1213)
                ->__PVT__done.isTriggered();
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9a860ec0__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([true] $unit::environment.gen.done.isTriggered())", 
                                                         "testbench.sv", 
                                                         1213);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] $unit::environment.gen.done.isTriggered())", 
                                                     "testbench.sv", 
                                                     1213);
    }
    __Vfork_2__sync.done("testbench.sv", 1212);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03aenvironment::__VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_pre_test(vlProcess, vlSymsp);
    this->__VnoInFunc_test(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_post_test(vlProcess, vlSymsp);
    co_return;
}

void Vdesign___024unit__03a__03aenvironment::_ctor_var_reset(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__aif = nullptr;
}

std::string Vdesign___024unit__03a__03aenvironment::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdesign___024unit__03a__03aenvironment::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03aenvironment::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mon:" + VL_TO_STRING(__PVT__mon);
    out += ", gen:" + VL_TO_STRING(__PVT__gen);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", sco:" + VL_TO_STRING(__PVT__sco);
    out += ", nextgd:" + VL_TO_STRING(__PVT__nextgd);
    out += ", done:" + VL_TO_STRING(__PVT__done);
    out += ", mbxgd:" + VL_TO_STRING(__PVT__mbxgd);
    out += ", mbxms:" + VL_TO_STRING(__PVT__mbxms);
    out += ", mbxgm:" + VL_TO_STRING(__PVT__mbxgm);
    out += ", aif:" + VL_TO_STRING(__PVT__aif);
    return (out);
}

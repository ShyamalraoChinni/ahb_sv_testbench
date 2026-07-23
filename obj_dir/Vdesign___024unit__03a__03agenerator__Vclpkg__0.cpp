// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

void Vdesign___024unit__03a__03agenerator::init(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign_std__03a__03amailbox__Tz1> mbxgd, VlClassRef<Vdesign_std__03a__03amailbox__Tz2> mbxgm) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__count = 0U;
    this->__PVT__mbxgd = mbxgd;
    this->__PVT__mbxgm = mbxgm;
    this->__PVT__tr = VL_NEW(Vdesign___024unit__03a__03atransaction, vlSymsp);
}

VlCoroutine Vdesign___024unit__03a__03agenerator::__VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03agenerator::__VnoInFunc_run\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vdesign___024unit__03a__03atransaction> __VlefCall_2__copy;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = this->__PVT__count;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if ((VlNull{} != this->__PVT__tr)) {
                VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 96)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
                __VlefCond_1 = __VlefCall_0__randomize;
            } else {
                __VlefCond_1 = 0U;
            }
            if (VL_UNLIKELY(((1U & (~ (0U != __VlefCond_1)))))) {
                VL_WRITEF_NX("[%0t] %%Error: testbench.sv:96: Assertion failed in %m: randomization failed\n",3, 'M',vlSymsp->name(),"$unit.generator.run.unnamedblk1_1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("testbench.sv", 96, "");
            }
        }
        VL_WRITEF_NX("GEN: data send to driver\n",0);
        VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 99)->__VnoInFunc_copy(vlSymsp, __VlefCall_2__copy);
        co_await VL_NULL_CHECK(this->__PVT__mbxgd, "testbench.sv", 99)->__VnoInFunc_put(vlProcess, vlSymsp, __VlefCall_2__copy);
        co_await VL_NULL_CHECK(this->__PVT__mbxgm, "testbench.sv", 100)->__VnoInFunc_put(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 100)
                                                                                ->__PVT__ulen);
        CData/*0:0*/ __VdynTrigger_hc423812f__0;
        __VdynTrigger_hc423812f__0 = 0;
        __VdynTrigger_hc423812f__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hc423812f__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([event] $unit::generator.drvnext)", 
                                                         "testbench.sv", 
                                                         102);
            __VdynTrigger_hc423812f__0 = this->__PVT__drvnext.isFired();
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc423812f__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         vlProcess, 
                                                         "@([event] $unit::generator.drvnext)", 
                                                         "testbench.sv", 
                                                         102);
            this->__PVT__drvnext.clearFired();
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([event] $unit::generator.drvnext)", 
                                                     "testbench.sv", 
                                                     102);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    vlSymsp->fireEvent(this->__PVT__done);
    co_return;
}

void Vdesign___024unit__03a__03agenerator::_ctor_var_reset(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vdesign___024unit__03a__03agenerator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03agenerator::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdesign___024unit__03a__03agenerator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign___024unit__03a__03agenerator::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mbxgd:" + VL_TO_STRING(__PVT__mbxgd);
    out += ", mbxgm:" + VL_TO_STRING(__PVT__mbxgm);
    out += ", done:" + VL_TO_STRING(__PVT__done);
    out += ", drvnext:" + VL_TO_STRING(__PVT__drvnext);
    out += ", count:" + VL_TO_STRING(__PVT__count);
    return (out);
}

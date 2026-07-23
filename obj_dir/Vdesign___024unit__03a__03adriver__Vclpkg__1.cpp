// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

VlCoroutine Vdesign___024unit__03a__03adriver::__VnoInFunc_wrap16_rd____Vfork_158__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign___024unit__03a__03adriver::__VnoInFunc_wrap16_rd____Vfork_158__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24acd20c__157;
    __VdynTrigger_h24acd20c__157 = 0;
    __VdynTrigger_h24acd20c__157 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24acd20c__157)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "testbench.sv", 
                                                     688);
        __VdynTrigger_h24acd20c__157 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24acd20c__157);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "testbench.sv", 
                                                     688);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "testbench.sv", 
                                                 688);
    VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 688)->hwrite 
        = __Vintraval_hb01efe50__7;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03adriver::__VnoInFunc_wrap16_rd____Vfork_157__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b6f6e4__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign___024unit__03a__03adriver::__VnoInFunc_wrap16_rd____Vfork_157__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24acd20c__156;
    __VdynTrigger_h24acd20c__156 = 0;
    __VdynTrigger_h24acd20c__156 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24acd20c__156)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "testbench.sv", 
                                                     686);
        __VdynTrigger_h24acd20c__156 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24acd20c__156);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "testbench.sv", 
                                                     686);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "testbench.sv", 
                                                 686);
    VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 686)->hburst 
        = __Vintraval_h10b6f6e4__1;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03adriver::__VnoInFunc_wrap16_rd____Vfork_156__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign___024unit__03a__03adriver::__VnoInFunc_wrap16_rd____Vfork_156__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24acd20c__155;
    __VdynTrigger_h24acd20c__155 = 0;
    __VdynTrigger_h24acd20c__155 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24acd20c__155)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "testbench.sv", 
                                                     684);
        __VdynTrigger_h24acd20c__155 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24acd20c__155);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "testbench.sv", 
                                                     684);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "testbench.sv", 
                                                 684);
    VL_NULL_CHECK(this->__PVT__aif, "testbench.sv", 684)->hresetn 
        = __Vintraval_h4743174c__16;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vdesign___024unit__03a__03adriver::__VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign___024unit__03a__03adriver::__VnoInFunc_run\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__mbxgd, "testbench.sv", 717)->__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__tr);
        if (VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 719)
            ->__PVT__hwrite) {
            if ((4U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 720)
                 ->__PVT__hburst)) {
                if ((2U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 720)
                     ->__PVT__hburst)) {
                    if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 720)
                         ->__PVT__hburst)) {
                        co_await this->__VnoInFunc_incr16_wr(vlProcess, vlSymsp);
                    } else {
                        co_await this->__VnoInFunc_wrap16_wr(vlProcess, vlSymsp);
                    }
                } else if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 720)
                            ->__PVT__hburst)) {
                    co_await this->__VnoInFunc_incr8_wr(vlProcess, vlSymsp);
                } else {
                    co_await this->__VnoInFunc_wrap8_wr(vlProcess, vlSymsp);
                }
            } else if ((2U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 720)
                        ->__PVT__hburst)) {
                if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 720)
                     ->__PVT__hburst)) {
                    co_await this->__VnoInFunc_incr4_wr(vlProcess, vlSymsp);
                } else {
                    co_await this->__VnoInFunc_wrap4_wr(vlProcess, vlSymsp);
                }
            } else if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 720)
                        ->__PVT__hburst)) {
                co_await this->__VnoInFunc_unspec_len_wr(vlProcess, vlSymsp);
            } else {
                co_await this->__VnoInFunc_single_tr_wr(vlProcess, vlSymsp);
            }
        } else if ((4U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 734)
                    ->__PVT__hburst)) {
            if ((2U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 734)
                 ->__PVT__hburst)) {
                if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 734)
                     ->__PVT__hburst)) {
                    co_await this->__VnoInFunc_incr16_rd(vlProcess, vlSymsp);
                } else {
                    co_await this->__VnoInFunc_wrap16_rd(vlProcess, vlSymsp);
                }
            } else if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 734)
                        ->__PVT__hburst)) {
                co_await this->__VnoInFunc_incr8_rd(vlProcess, vlSymsp);
            } else {
                co_await this->__VnoInFunc_wrap8_rd(vlProcess, vlSymsp);
            }
        } else if ((2U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 734)
                    ->__PVT__hburst)) {
            if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 734)
                 ->__PVT__hburst)) {
                co_await this->__VnoInFunc_incr4_rd(vlProcess, vlSymsp);
            } else {
                co_await this->__VnoInFunc_wrap4_rd(vlProcess, vlSymsp);
            }
        } else if ((1U & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 734)
                    ->__PVT__hburst)) {
            co_await this->__VnoInFunc_unspec_len_rd(vlProcess, vlSymsp);
        } else {
            co_await this->__VnoInFunc_single_tr_rd(vlProcess, vlSymsp);
        }
    }
    co_return;
}

void Vdesign___024unit__03a__03adriver::_ctor_var_reset(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign___024unit__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__aif = nullptr;
}

std::string Vdesign___024unit__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign___024unit__03a__03adriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdesign___024unit__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign___024unit__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", aif:" + VL_TO_STRING(__PVT__aif);
    out += ", mbxgd:" + VL_TO_STRING(__PVT__mbxgd);
    out += ", drvnext:" + VL_TO_STRING(__PVT__drvnext);
    return (out);
}

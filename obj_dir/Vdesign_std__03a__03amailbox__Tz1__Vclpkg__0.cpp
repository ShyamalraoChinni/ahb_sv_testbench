// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

void Vdesign_std__03a__03amailbox__Tz1::init(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_num(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_put(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h18cc18f1__0;
    __Vtrigprevexpr_h18cc18f1__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_h2ab2edfc__0;
            __VdynTrigger_h2ab2edfc__0 = 0;
            __VdynTrigger_h2ab2edfc__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h2ab2edfc__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             54);
                __Vtrigprevexpr_h18cc18f1__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_h2ab2edfc__0 = __Vtrigprevexpr_h18cc18f1__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2ab2edfc__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         54);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;
}

void Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_try_put(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_try_put\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_put__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (((0U == this->__PVT__m_bound) | VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_bound))) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_get(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h944b80de__0;
    __Vtrigprevexpr_h944b80de__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_hb234560d__0;
            __VdynTrigger_hb234560d__0 = 0;
            __VdynTrigger_hb234560d__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hb234560d__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             70);
                __Vtrigprevexpr_h944b80de__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_hb234560d__0 = __Vtrigprevexpr_h944b80de__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb234560d__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         70);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;
}

void Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_try_get(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_try_get\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_get__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h944b80de__1;
    __Vtrigprevexpr_h944b80de__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_hb234560d__1;
            __VdynTrigger_hb234560d__1 = 0;
            __VdynTrigger_hb234560d__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hb234560d__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             87);
                __Vtrigprevexpr_h944b80de__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_hb234560d__1 = __Vtrigprevexpr_h944b80de__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb234560d__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         87);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;
}

void Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_peek__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdesign_std__03a__03amailbox__Tz1::_ctor_var_reset(Vdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}

std::string Vdesign_std__03a__03amailbox__Tz1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdesign_std__03a__03amailbox__Tz1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_std__03a__03amailbox__Tz1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}

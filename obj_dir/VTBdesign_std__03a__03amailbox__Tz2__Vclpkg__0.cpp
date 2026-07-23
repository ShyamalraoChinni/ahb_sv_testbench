// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

void VTBdesign_std__03a__03amailbox__Tz2::init(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_num(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_put(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hc7428179__0;
    __Vtrigprevexpr_hc7428179__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_hbd2d5904__0;
            __VdynTrigger_hbd2d5904__0 = 0;
            __VdynTrigger_hbd2d5904__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hbd2d5904__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (std::mailbox__Tz2.m_queue.size() < std::mailbox__Tz2.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             54);
                __Vtrigprevexpr_hc7428179__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_hbd2d5904__0 = __Vtrigprevexpr_hc7428179__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbd2d5904__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (std::mailbox__Tz2.m_queue.size() < std::mailbox__Tz2.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         54);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;
}

void VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_try_put(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_try_put\n"); );
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

VlCoroutine VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_get(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h153144e4__0;
    __Vtrigprevexpr_h153144e4__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h2f3e11fb__0;
            __VdynTrigger_h2f3e11fb__0 = 0;
            __VdynTrigger_h2f3e11fb__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h2f3e11fb__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz2.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             70);
                __Vtrigprevexpr_h153144e4__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h2f3e11fb__0 = __Vtrigprevexpr_h153144e4__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2f3e11fb__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz2.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         70);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;
}

void VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_try_get(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_try_get\n"); );
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

VlCoroutine VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_peek(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h153144e4__1;
    __Vtrigprevexpr_h153144e4__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h2f3e11fb__1;
            __VdynTrigger_h2f3e11fb__1 = 0;
            __VdynTrigger_h2f3e11fb__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h2f3e11fb__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz2.m_queue.size()))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             87);
                __Vtrigprevexpr_h153144e4__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h2f3e11fb__1 = __Vtrigprevexpr_h153144e4__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2f3e11fb__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz2.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         87);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;
}

void VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_try_peek(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::__VnoInFunc_try_peek\n"); );
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

void VTBdesign_std__03a__03amailbox__Tz2::_ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
    __PVT__m_queue.atDefault() = 0;
}

std::string VTBdesign_std__03a__03amailbox__Tz2::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string VTBdesign_std__03a__03amailbox__Tz2::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTBdesign_std__03a__03amailbox__Tz2::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}

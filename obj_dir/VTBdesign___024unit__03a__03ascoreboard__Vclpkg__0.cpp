// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

void VTBdesign___024unit__03a__03ascoreboard::init(VTBdesign__Syms* __restrict vlSymsp, VlClassRef<VTBdesign_std__03a__03amailbox__Tz1> mbxms) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03ascoreboard::new\n"); );
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    _ctor_var_reset(vlSymsp);
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x000000ffU)) {
        this->__PVT__data[__Vilp1] = 0x0cU;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    this->__PVT__count = 0U;
    this->__PVT__len = 0U;
    this->__PVT__mbxms = mbxms;
}

VlCoroutine VTBdesign___024unit__03a__03ascoreboard::__VnoInFunc_run(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__mbxms, "testbench.sv", 1118)->__VnoInFunc_get(vlProcess, vlSymsp, this->__PVT__tr);
        if (VL_UNLIKELY((VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1120)
                         ->__PVT__hwrite))) {
            VL_WRITEF_NX("SCO: DATA WRITE\n",0);
            this->__PVT__data[(0x000000ffU & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1122)
                               ->__PVT__haddr)] = (0x000000ffU 
                                                   & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1122)
                                                   ->__PVT__hwdata);
            this->__PVT__data[(0x000000ffU & ((IData)(1U) 
                                              + VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1123)
                                              ->__PVT__haddr))] 
                = (0x000000ffU & (VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1123)
                                  ->__PVT__hwdata >> 8U));
            this->__PVT__data[(0x000000ffU & ((IData)(2U) 
                                              + VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1124)
                                              ->__PVT__haddr))] 
                = (0x000000ffU & (VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1124)
                                  ->__PVT__hwdata >> 0x10U));
            this->__PVT__data[(0x000000ffU & ((IData)(3U) 
                                              + VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1125)
                                              ->__PVT__haddr))] 
                = (VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1125)
                   ->__PVT__hwdata >> 0x18U);
        }
        if ((1U & (~ VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1128)
                   ->__PVT__hwrite))) {
            this->__PVT__rdata = (((((IData)(this->__PVT__data
                                             [(0x000000ffU 
                                               & ((IData)(3U) 
                                                  + VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1129)
                                                  ->__PVT__haddr))]) 
                                     << 8U) | this->__PVT__data
                                    [(0x000000ffU & 
                                      ((IData)(2U) 
                                       + VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1129)
                                       ->__PVT__haddr))]) 
                                   << 0x00000010U) 
                                  | (((IData)(this->__PVT__data
                                              [(0x000000ffU 
                                                & ((IData)(1U) 
                                                   + VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1129)
                                                   ->__PVT__haddr))]) 
                                      << 8U) | this->__PVT__data
                                     [(0x000000ffU 
                                       & VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1129)
                                       ->__PVT__haddr)]));
            if (VL_UNLIKELY(((0x0c0c0c0cU == VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1131)
                              ->__PVT__hrdata)))) {
                VL_WRITEF_NX("SCO: EMPTY LOCATION READ\n",0);
            } else if ((VL_NULL_CHECK(this->__PVT__tr, "testbench.sv", 1134)
                        ->__PVT__hrdata == this->__PVT__rdata)) {
                VL_WRITEF_NX("DATA MATCHED\n",0);
            } else {
                VL_WRITEF_NX("DATA MISMATCHED\n",0);
            }
        }
    }
    co_return;
}

void VTBdesign___024unit__03a__03ascoreboard::_ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__rdata = 0;
}

std::string VTBdesign___024unit__03a__03ascoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03ascoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string VTBdesign___024unit__03a__03ascoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTBdesign___024unit__03a__03ascoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tr:" + VL_TO_STRING(__PVT__tr);
    out += ", mbxms:" + VL_TO_STRING(__PVT__mbxms);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    out += ", count:" + VL_TO_STRING(__PVT__count);
    out += ", len:" + VL_TO_STRING(__PVT__len);
    out += ", rdata:" + VL_TO_STRING(__PVT__rdata);
    return (out);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

void VTBdesign___024root___ctor_var_reset(VTBdesign___024root* vlSelf);

VTBdesign___024root::VTBdesign___024root(VTBdesign__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VTBdesign___024root___ctor_var_reset(this);
}

void VTBdesign___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTBdesign___024root::~VTBdesign___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"


VTBdesign_std__03a__03asemaphore__Vclpkg::VTBdesign_std__03a__03asemaphore__Vclpkg() = default;
VTBdesign_std__03a__03asemaphore__Vclpkg::~VTBdesign_std__03a__03asemaphore__Vclpkg() = default;

void VTBdesign_std__03a__03asemaphore__Vclpkg::ctor(VTBdesign__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VTBdesign_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTBdesign_std__03a__03asemaphore__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

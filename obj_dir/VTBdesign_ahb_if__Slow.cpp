// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"

void VTBdesign_ahb_if___ctor_var_reset(VTBdesign_ahb_if* vlSelf);

VTBdesign_ahb_if::VTBdesign_ahb_if() = default;
VTBdesign_ahb_if::~VTBdesign_ahb_if() = default;

void VTBdesign_ahb_if::ctor(VTBdesign__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VTBdesign_ahb_if___ctor_var_reset(this);
}

void VTBdesign_ahb_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTBdesign_ahb_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

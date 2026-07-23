// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"

void Vdesign_ahb_if___ctor_var_reset(Vdesign_ahb_if* vlSelf);

Vdesign_ahb_if::Vdesign_ahb_if() = default;
Vdesign_ahb_if::~Vdesign_ahb_if() = default;

void Vdesign_ahb_if::ctor(Vdesign__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdesign_ahb_if___ctor_var_reset(this);
}

void Vdesign_ahb_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdesign_ahb_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

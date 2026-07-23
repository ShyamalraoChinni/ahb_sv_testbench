// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"


Vdesign_std::Vdesign_std() = default;
Vdesign_std::~Vdesign_std() = default;

void Vdesign_std::ctor(Vdesign__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vdesign_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdesign_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

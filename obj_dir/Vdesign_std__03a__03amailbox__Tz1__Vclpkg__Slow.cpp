// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"


Vdesign_std__03a__03amailbox__Tz1__Vclpkg::Vdesign_std__03a__03amailbox__Tz1__Vclpkg() = default;
Vdesign_std__03a__03amailbox__Tz1__Vclpkg::~Vdesign_std__03a__03amailbox__Tz1__Vclpkg() = default;

void Vdesign_std__03a__03amailbox__Tz1__Vclpkg::ctor(Vdesign__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vdesign_std__03a__03amailbox__Tz1__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdesign_std__03a__03amailbox__Tz1__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign.h for the primary calling header

#include "Vdesign__pch.h"


Vdesign___024unit::Vdesign___024unit() = default;
Vdesign___024unit::~Vdesign___024unit() = default;

void Vdesign___024unit::ctor(Vdesign__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vdesign___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdesign___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

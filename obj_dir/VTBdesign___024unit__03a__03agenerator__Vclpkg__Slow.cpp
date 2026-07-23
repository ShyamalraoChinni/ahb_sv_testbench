// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTBdesign.h for the primary calling header

#include "VTBdesign__pch.h"


VTBdesign___024unit__03a__03agenerator__Vclpkg::VTBdesign___024unit__03a__03agenerator__Vclpkg() = default;
VTBdesign___024unit__03a__03agenerator__Vclpkg::~VTBdesign___024unit__03a__03agenerator__Vclpkg() = default;

void VTBdesign___024unit__03a__03agenerator__Vclpkg::ctor(VTBdesign__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VTBdesign___024unit__03a__03agenerator__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VTBdesign___024unit__03a__03agenerator__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

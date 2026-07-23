// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN_STD_H_
#define VERILATED_VTBDESIGN_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign_std final {
  public:

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign_std();
    ~VTBdesign_std();
    void ctor(VTBdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTBdesign_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

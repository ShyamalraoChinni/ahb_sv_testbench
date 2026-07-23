// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN_STD_H_
#define VERILATED_VDESIGN_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign_std final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign_std();
    ~Vdesign_std();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

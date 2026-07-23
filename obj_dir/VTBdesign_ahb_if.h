// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN_AHB_IF_H_
#define VERILATED_VTBDESIGN_AHB_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign_ahb_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*2:0*/ hsize;
    CData/*2:0*/ hburst;
    CData/*1:0*/ htrans;
    CData/*0:0*/ hresetn;
    CData/*0:0*/ hsel;
    CData/*0:0*/ hwrite;
    CData/*0:0*/ hready;
    IData/*31:0*/ haddr;
    IData/*31:0*/ hwdata;
    IData/*31:0*/ hrdata;
    IData/*31:0*/ next_addr;

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign_ahb_if();
    ~VTBdesign_ahb_if();
    void ctor(VTBdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTBdesign_ahb_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VTBdesign_ahb_if* obj);

#endif  // guard

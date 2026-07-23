// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN___024UNIT__03A__03ASCOREBOARD__VCLPKG_H_
#define VERILATED_VDESIGN___024UNIT__03A__03ASCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign___024unit__03a__03atransaction;
class Vdesign_std__03a__03amailbox__Tz1;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign___024unit__03a__03ascoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign___024unit__03a__03ascoreboard__Vclpkg();
    ~Vdesign___024unit__03a__03ascoreboard__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign___024unit__03a__03ascoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdesign__Syms;

class Vdesign___024unit__03a__03ascoreboard : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__count;
    IData/*31:0*/ __PVT__len;
    IData/*31:0*/ __PVT__rdata;
    VlUnpacked<CData/*7:0*/, 256> __PVT__data;
    VlClassRef<Vdesign___024unit__03a__03atransaction> __PVT__tr;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz1> __PVT__mbxms;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::scoreboard"; }
    VlClass* clone() const { return new Vdesign___024unit__03a__03ascoreboard(*this); }
    VlCoroutine __VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign___024unit__03a__03ascoreboard() = default;
    void init(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign_std__03a__03amailbox__Tz1> mbxms);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign___024unit__03a__03ascoreboard() {}
};


#endif  // guard

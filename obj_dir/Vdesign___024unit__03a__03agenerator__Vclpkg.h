// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN___024UNIT__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VDESIGN___024UNIT__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign___024unit__03a__03atransaction;
class Vdesign_std__03a__03amailbox__Tz1;
class Vdesign_std__03a__03amailbox__Tz2;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign___024unit__03a__03agenerator__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign___024unit__03a__03agenerator__Vclpkg();
    ~Vdesign___024unit__03a__03agenerator__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign___024unit__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdesign__Syms;

class Vdesign___024unit__03a__03agenerator : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__count;
    VlAssignableEvent __PVT__done;
    VlAssignableEvent __PVT__drvnext;
    VlClassRef<Vdesign___024unit__03a__03atransaction> __PVT__tr;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz1> __PVT__mbxgd;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz2> __PVT__mbxgm;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::generator"; }
    VlClass* clone() const { return new Vdesign___024unit__03a__03agenerator(*this); }
    VlCoroutine __VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign___024unit__03a__03agenerator() = default;
    void init(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign_std__03a__03amailbox__Tz1> mbxgd, VlClassRef<Vdesign_std__03a__03amailbox__Tz2> mbxgm);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign___024unit__03a__03agenerator() {}
};


#endif  // guard

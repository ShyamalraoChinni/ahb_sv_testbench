// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_
#define VERILATED_VDESIGN___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign___024unit__03a__03adriver;
class Vdesign___024unit__03a__03agenerator;
class Vdesign___024unit__03a__03amonitor;
class Vdesign___024unit__03a__03ascoreboard;
class Vdesign_std__03a__03amailbox__Tz1;
class Vdesign_std__03a__03amailbox__Tz2;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign___024unit__03a__03aenvironment__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign___024unit__03a__03aenvironment__Vclpkg();
    ~Vdesign___024unit__03a__03aenvironment__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign___024unit__03a__03aenvironment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdesign__Syms;

class Vdesign___024unit__03a__03aenvironment : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssignableEvent __PVT__nextgd;
    VlAssignableEvent __PVT__done;
    VlClassRef<Vdesign___024unit__03a__03amonitor> __PVT__mon;
    VlClassRef<Vdesign___024unit__03a__03agenerator> __PVT__gen;
    VlClassRef<Vdesign___024unit__03a__03adriver> __PVT__drv;
    VlClassRef<Vdesign___024unit__03a__03ascoreboard> __PVT__sco;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz1> __PVT__mbxgd;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz1> __PVT__mbxms;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz2> __PVT__mbxgm;
    Vdesign_ahb_if* __PVT__aif;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::environment"; }
    VlClass* clone() const { return new Vdesign___024unit__03a__03aenvironment(*this); }
    VlCoroutine __VnoInFunc_post_test(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_post_test____Vfork_2__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    VlCoroutine __VnoInFunc_pre_test(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_test(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_test____Vfork_1__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_test____Vfork_1__1(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_test____Vfork_1__2(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_test____Vfork_1__3(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign___024unit__03a__03aenvironment() = default;
    void init(Vdesign__Syms* __restrict vlSymsp, Vdesign_ahb_if* aif);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign___024unit__03a__03aenvironment() {}
};


#endif  // guard

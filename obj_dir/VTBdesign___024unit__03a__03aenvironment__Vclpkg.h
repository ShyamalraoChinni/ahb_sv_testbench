// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_
#define VERILATED_VTBDESIGN___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VTBdesign___024unit__03a__03adriver;
class VTBdesign___024unit__03a__03agenerator;
class VTBdesign___024unit__03a__03amonitor;
class VTBdesign___024unit__03a__03ascoreboard;
class VTBdesign_std__03a__03amailbox__Tz1;
class VTBdesign_std__03a__03amailbox__Tz2;


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign___024unit__03a__03aenvironment__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign___024unit__03a__03aenvironment__Vclpkg();
    ~VTBdesign___024unit__03a__03aenvironment__Vclpkg();
    void ctor(VTBdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTBdesign___024unit__03a__03aenvironment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VTBdesign__Syms;

class VTBdesign___024unit__03a__03aenvironment : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssignableEvent __PVT__nextgd;
    VlAssignableEvent __PVT__done;
    VlClassRef<VTBdesign___024unit__03a__03amonitor> __PVT__mon;
    VlClassRef<VTBdesign___024unit__03a__03agenerator> __PVT__gen;
    VlClassRef<VTBdesign___024unit__03a__03adriver> __PVT__drv;
    VlClassRef<VTBdesign___024unit__03a__03ascoreboard> __PVT__sco;
    VlClassRef<VTBdesign_std__03a__03amailbox__Tz1> __PVT__mbxgd;
    VlClassRef<VTBdesign_std__03a__03amailbox__Tz1> __PVT__mbxms;
    VlClassRef<VTBdesign_std__03a__03amailbox__Tz2> __PVT__mbxgm;
    VTBdesign_ahb_if* __PVT__aif;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::environment"; }
    VlClass* clone() const { return new VTBdesign___024unit__03a__03aenvironment(*this); }
    VlCoroutine __VnoInFunc_post_test(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_post_test____Vfork_2__0(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    VlCoroutine __VnoInFunc_pre_test(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_test(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_test____Vfork_1__0(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_test____Vfork_1__1(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_test____Vfork_1__2(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_test____Vfork_1__3(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
    void _ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp);
  public:
    VTBdesign___024unit__03a__03aenvironment() = default;
    void init(VTBdesign__Syms* __restrict vlSymsp, VTBdesign_ahb_if* aif);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~VTBdesign___024unit__03a__03aenvironment() {}
};


#endif  // guard

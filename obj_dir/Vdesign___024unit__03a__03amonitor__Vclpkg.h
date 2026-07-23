// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN___024UNIT__03A__03AMONITOR__VCLPKG_H_
#define VERILATED_VDESIGN___024UNIT__03A__03AMONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign___024unit__03a__03atransaction;
class Vdesign_std__03a__03amailbox__Tz1;
class Vdesign_std__03a__03amailbox__Tz2;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign___024unit__03a__03amonitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign___024unit__03a__03amonitor__Vclpkg();
    ~Vdesign___024unit__03a__03amonitor__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign___024unit__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdesign__Syms;

class Vdesign___024unit__03a__03amonitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__temp;
    IData/*31:0*/ __PVT__len;
    VlClassRef<Vdesign___024unit__03a__03atransaction> __PVT__tr;
    Vdesign_ahb_if* __PVT__aif;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz2> __PVT__mbxgm;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz1> __PVT__mbxms;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::monitor"; }
    VlClass* clone() const { return new Vdesign___024unit__03a__03amonitor(*this); }
    VlCoroutine __VnoInFunc_incr16_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_incr16_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_incr4_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_incr4_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_incr8_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_incr8_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_single_tr_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_single_tr_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_unspec_tr_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_unspec_tr_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wrap16_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wrap16_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wrap4_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wrap4_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wrap8_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_wrap8_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign___024unit__03a__03amonitor() = default;
    void init(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign_std__03a__03amailbox__Tz1> mbxms, VlClassRef<Vdesign_std__03a__03amailbox__Tz2> mbxgm);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign___024unit__03a__03amonitor() {}
};


#endif  // guard

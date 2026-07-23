// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VDESIGN_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign___024unit__03a__03atransaction;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign_std__03a__03amailbox__Tz1__Vclpkg();
    ~Vdesign_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdesign__Syms;

class Vdesign_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vdesign___024unit__03a__03atransaction>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz1"; }
    VlClass* clone() const { return new Vdesign_std__03a__03amailbox__Tz1(*this); }
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message);
    void __VnoInFunc_num(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message);
    VlCoroutine __VnoInFunc_put(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> message);
    void __VnoInFunc_try_get(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign_std__03a__03amailbox__Tz1() = default;
    void init(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign_std__03a__03amailbox__Tz1() {}
};


#endif  // guard

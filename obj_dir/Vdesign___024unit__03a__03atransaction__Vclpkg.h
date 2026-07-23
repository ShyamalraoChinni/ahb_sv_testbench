// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN___024UNIT__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VDESIGN___024UNIT__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign___024unit__03a__03atransaction;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign___024unit__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign___024unit__03a__03atransaction__Vclpkg();
    ~Vdesign___024unit__03a__03atransaction__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign___024unit__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdesign__Syms;

class Vdesign___024unit__03a__03atransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__ulen;
    CData/*2:0*/ __PVT__hsize;
    CData/*2:0*/ __PVT__hburst;
    CData/*0:0*/ __PVT__hresetn;
    CData/*0:0*/ __PVT__hwrite;
    CData/*1:0*/ __PVT__htrans;
    CData/*1:0*/ __PVT__hresp;
    CData/*0:0*/ __PVT__hready;
    IData/*31:0*/ __PVT__haddr;
    IData/*31:0*/ __PVT__hwdata;
    IData/*31:0*/ __PVT__hrdata;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::transaction"; }
    VlClass* clone() const { return new Vdesign___024unit__03a__03atransaction(*this); }
    void __VnoInFunc___VBasicRand(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_addr_c_setup_constraint(Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_burst_c_setup_constraint(Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_copy(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign___024unit__03a__03atransaction> &copy__Vfuncrtn);
    void __VnoInFunc_randomize(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_ulen_c_setup_constraint(Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_write_c_setup_constraint(Vdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign___024unit__03a__03atransaction() = default;
    void init(Vdesign__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign___024unit__03a__03atransaction() {}
};


#endif  // guard

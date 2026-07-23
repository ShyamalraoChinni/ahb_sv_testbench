// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN___024UNIT__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTBDESIGN___024UNIT__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VTBdesign___024unit__03a__03atransaction;


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign___024unit__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign___024unit__03a__03atransaction__Vclpkg();
    ~VTBdesign___024unit__03a__03atransaction__Vclpkg();
    void ctor(VTBdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTBdesign___024unit__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VTBdesign__Syms;

class VTBdesign___024unit__03a__03atransaction : public virtual VlClass {
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
    VlClass* clone() const { return new VTBdesign___024unit__03a__03atransaction(*this); }
    void __VnoInFunc___VBasicRand(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_addr_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_burst_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_copy(VTBdesign__Syms* __restrict vlSymsp, VlClassRef<VTBdesign___024unit__03a__03atransaction> &copy__Vfuncrtn);
    void __VnoInFunc_randomize(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_ulen_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_write_c_setup_constraint(VTBdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp);
  public:
    VTBdesign___024unit__03a__03atransaction() = default;
    void init(VTBdesign__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~VTBdesign___024unit__03a__03atransaction() {}
};


#endif  // guard

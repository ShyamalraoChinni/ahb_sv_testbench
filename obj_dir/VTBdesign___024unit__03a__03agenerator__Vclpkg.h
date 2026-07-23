// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN___024UNIT__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VTBDESIGN___024UNIT__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VTBdesign___024unit__03a__03atransaction;
class VTBdesign_std__03a__03amailbox__Tz1;
class VTBdesign_std__03a__03amailbox__Tz2;


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign___024unit__03a__03agenerator__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign___024unit__03a__03agenerator__Vclpkg();
    ~VTBdesign___024unit__03a__03agenerator__Vclpkg();
    void ctor(VTBdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTBdesign___024unit__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VTBdesign__Syms;

class VTBdesign___024unit__03a__03agenerator : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__count;
    VlAssignableEvent __PVT__done;
    VlAssignableEvent __PVT__drvnext;
    VlClassRef<VTBdesign___024unit__03a__03atransaction> __PVT__tr;
    VlClassRef<VTBdesign_std__03a__03amailbox__Tz1> __PVT__mbxgd;
    VlClassRef<VTBdesign_std__03a__03amailbox__Tz2> __PVT__mbxgm;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::generator"; }
    VlClass* clone() const { return new VTBdesign___024unit__03a__03agenerator(*this); }
    VlCoroutine __VnoInFunc_run(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp);
  public:
    VTBdesign___024unit__03a__03agenerator() = default;
    void init(VTBdesign__Syms* __restrict vlSymsp, VlClassRef<VTBdesign_std__03a__03amailbox__Tz1> mbxgd, VlClassRef<VTBdesign_std__03a__03amailbox__Tz2> mbxgm);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~VTBdesign___024unit__03a__03agenerator() {}
};


#endif  // guard

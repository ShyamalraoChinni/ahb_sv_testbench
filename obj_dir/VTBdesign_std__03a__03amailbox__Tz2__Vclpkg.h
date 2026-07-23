// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN_STD__03A__03AMAILBOX__TZ2__VCLPKG_H_
#define VERILATED_VTBDESIGN_STD__03A__03AMAILBOX__TZ2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign_std__03a__03amailbox__Tz2__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign_std__03a__03amailbox__Tz2__Vclpkg();
    ~VTBdesign_std__03a__03amailbox__Tz2__Vclpkg();
    void ctor(VTBdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTBdesign_std__03a__03amailbox__Tz2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VTBdesign__Syms;

class VTBdesign_std__03a__03amailbox__Tz2 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<CData/*4:0*/> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz2"; }
    VlClass* clone() const { return new VTBdesign_std__03a__03amailbox__Tz2(*this); }
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message);
    void __VnoInFunc_num(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message);
    VlCoroutine __VnoInFunc_put(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ message);
    void __VnoInFunc_try_get(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(VTBdesign__Syms* __restrict vlSymsp, CData/*4:0*/ message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp);
  public:
    VTBdesign_std__03a__03amailbox__Tz2() = default;
    void init(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~VTBdesign_std__03a__03amailbox__Tz2() {}
};


#endif  // guard

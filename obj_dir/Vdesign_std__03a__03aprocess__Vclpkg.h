// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VDESIGN_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign_std__03a__03aprocess;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign_std__03a__03aprocess__Vclpkg();
    ~Vdesign_std__03a__03aprocess__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vdesign__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vdesign_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vdesign__Syms;

class Vdesign_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new Vdesign_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vdesign__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vdesign__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign_std__03a__03aprocess() = default;
    void init(Vdesign__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:200:21

template<> template<>
inline bool VlClassRef<Vdesign_std__03a__03aprocess>::operator==(const VlClassRef<Vdesign_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vdesign_std__03a__03aprocess>::operator!=(const VlClassRef<Vdesign_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vdesign_std__03a__03aprocess>::operator<(const VlClassRef<Vdesign_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard

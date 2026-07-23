// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTBdesign.h for the primary calling header

#ifndef VERILATED_VTBDESIGN_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTBDESIGN_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VTBdesign_std__03a__03aprocess;


class VTBdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTBdesign_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VTBdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VTBdesign_std__03a__03aprocess__Vclpkg();
    ~VTBdesign_std__03a__03aprocess__Vclpkg();
    void ctor(VTBdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VTBdesign_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(VTBdesign__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VTBdesign_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, VTBdesign__Syms* __restrict vlSymsp, VlClassRef<VTBdesign_std__03a__03aprocess> &self__Vfuncrtn);
};


class VTBdesign__Syms;

class VTBdesign_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new VTBdesign_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VTBdesign__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VTBdesign__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VTBdesign__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VTBdesign__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VTBdesign__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VTBdesign__Syms* __restrict vlSymsp);
  public:
    VTBdesign_std__03a__03aprocess() = default;
    void init(VTBdesign__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~VTBdesign_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:200:21

template<> template<>
inline bool VlClassRef<VTBdesign_std__03a__03aprocess>::operator==(const VlClassRef<VTBdesign_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<VTBdesign_std__03a__03aprocess>::operator!=(const VlClassRef<VTBdesign_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<VTBdesign_std__03a__03aprocess>::operator<(const VlClassRef<VTBdesign_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard

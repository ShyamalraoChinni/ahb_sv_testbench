// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign.h for the primary calling header

#ifndef VERILATED_VDESIGN___024UNIT__03A__03ADRIVER__VCLPKG_H_
#define VERILATED_VDESIGN___024UNIT__03A__03ADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdesign___024unit__03a__03atransaction;
class Vdesign_std__03a__03amailbox__Tz1;


class Vdesign__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdesign___024unit__03a__03adriver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdesign__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdesign___024unit__03a__03adriver__Vclpkg();
    ~Vdesign___024unit__03a__03adriver__Vclpkg();
    void ctor(Vdesign__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdesign___024unit__03a__03adriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdesign__Syms;

class Vdesign___024unit__03a__03adriver : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssignableEvent __PVT__drvnext;
    VlClassRef<Vdesign___024unit__03a__03atransaction> __PVT__tr;
    Vdesign_ahb_if* __PVT__aif;
    VlClassRef<Vdesign_std__03a__03amailbox__Tz1> __PVT__mbxgd;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::driver"; }
    VlClass* clone() const { return new Vdesign___024unit__03a__03adriver(*this); }
    VlCoroutine __VnoInFunc_incr16_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_100__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__8);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_101__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__9);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_102__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__9);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_103__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__9);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_104__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__9);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_105__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__7);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_96__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__10);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_97__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10afc13c__1);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_98__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__4);
    VlCoroutine __VnoInFunc_incr16_rd____Vfork_99__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__9);
  public:
    VlCoroutine __VnoInFunc_incr16_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_86__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__9);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_87__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10afc13c__0);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_88__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__4);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_89__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__8);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_90__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__4);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_91__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__8);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_92__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__8);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_93__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__8);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_94__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hd51d3444__3);
    VlCoroutine __VnoInFunc_incr16_wr____Vfork_95__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__6);
  public:
    VlCoroutine __VnoInFunc_incr4_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_56__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__6);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_57__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b76612__1);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_58__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__2);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_59__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__5);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_60__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__4);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_61__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__5);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_62__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__5);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_63__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__5);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_64__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__5);
    VlCoroutine __VnoInFunc_incr4_rd____Vfork_65__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__3);
  public:
    VlCoroutine __VnoInFunc_incr4_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_46__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__5);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_47__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b76612__0);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_48__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__2);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_49__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__4);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_50__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__2);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_51__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__4);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_52__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__4);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_53__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__4);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_54__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hd51d3444__1);
    VlCoroutine __VnoInFunc_incr4_wr____Vfork_55__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__2);
  public:
    VlCoroutine __VnoInFunc_incr8_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_76__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__8);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_77__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b76612__2);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_78__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__3);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_79__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__7);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_80__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__6);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_81__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__7);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_82__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__7);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_83__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__7);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_84__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__7);
    VlCoroutine __VnoInFunc_incr8_rd____Vfork_85__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__5);
  public:
    VlCoroutine __VnoInFunc_incr8_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_66__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__7);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_67__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b6c836__0);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_68__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__3);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_69__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__6);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_70__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__3);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_71__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__6);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_72__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__6);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_73__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__6);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_74__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hd51d3444__2);
    VlCoroutine __VnoInFunc_incr8_wr____Vfork_75__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__4);
  public:
    VlCoroutine __VnoInFunc_reset(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_reset____Vfork_1__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h472de52b__0);
    VlCoroutine __VnoInFunc_reset____Vfork_2__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_ha6dd5b1e__0);
    VlCoroutine __VnoInFunc_reset____Vfork_3__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hf3f483cf__0);
    VlCoroutine __VnoInFunc_reset____Vfork_4__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__0);
    VlCoroutine __VnoInFunc_reset____Vfork_5__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4f2bfd59__0);
    VlCoroutine __VnoInFunc_reset____Vfork_6__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he13c3ac9__0);
    VlCoroutine __VnoInFunc_reset____Vfork_7__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h0b66e232__0);
    VlCoroutine __VnoInFunc_reset____Vfork_8__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hcdcf9990__0);
    VlCoroutine __VnoInFunc_reset____Vfork_9__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__0);
  public:
    VlCoroutine __VnoInFunc_run(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_single_tr_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_18__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__2);
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_19__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10992c7d__1);
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_20__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__0);
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_21__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__1);
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_22__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__1);
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_23__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__1);
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_24__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__1);
    VlCoroutine __VnoInFunc_single_tr_rd____Vfork_25__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__1);
  public:
    VlCoroutine __VnoInFunc_single_tr_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_10__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__1);
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_11__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10992c7d__0);
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_12__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__0);
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_13__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__0);
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_14__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__0);
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_15__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__0);
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_16__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__0);
    VlCoroutine __VnoInFunc_single_tr_wr____Vfork_17__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__0);
  public:
    VlCoroutine __VnoInFunc_unspec_len_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_36__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__4);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_37__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10985ece__1);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_38__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__1);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_39__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__3);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_40__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__2);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_41__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__3);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_42__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__3);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_43__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__3);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_44__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__3);
    VlCoroutine __VnoInFunc_unspec_len_rd____Vfork_45__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__1);
  public:
    VlCoroutine __VnoInFunc_unspec_len_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_26__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__3);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_27__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10985ece__0);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_28__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__1);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_29__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__2);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_30__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__1);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_31__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__2);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_32__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__2);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_33__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__2);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_34__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hd51d3444__0);
    VlCoroutine __VnoInFunc_unspec_len_wr____Vfork_35__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__0);
  public:
    VlCoroutine __VnoInFunc_wrap16_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_156__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__16);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_157__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b6f6e4__1);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_158__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__7);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_159__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__15);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_160__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__14);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_161__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__15);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_162__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__15);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_163__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__15);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_164__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__15);
    VlCoroutine __VnoInFunc_wrap16_rd____Vfork_165__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__13);
  public:
    VlCoroutine __VnoInFunc_wrap16_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_146__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__15);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_147__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b6f6e4__0);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_148__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__7);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_149__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__14);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_150__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__7);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_151__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__14);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_152__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__14);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_153__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__14);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_154__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hd51d3444__6);
    VlCoroutine __VnoInFunc_wrap16_wr____Vfork_155__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__12);
  public:
    VlCoroutine __VnoInFunc_wrap4_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_116__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__12);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_117__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h109948de__1);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_118__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__5);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_119__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__11);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_120__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__10);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_121__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__11);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_122__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__11);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_123__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__11);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_124__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__11);
    VlCoroutine __VnoInFunc_wrap4_rd____Vfork_125__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__9);
  public:
    VlCoroutine __VnoInFunc_wrap4_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_106__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__11);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_107__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h109948de__0);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_108__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__5);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_109__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__10);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_110__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__5);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_111__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__10);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_112__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__10);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_113__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__10);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_114__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hd51d3444__4);
    VlCoroutine __VnoInFunc_wrap4_wr____Vfork_115__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__8);
  public:
    VlCoroutine __VnoInFunc_wrap8_rd(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_136__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__14);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_137__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b61885__1);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_138__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01efe50__6);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_139__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__13);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_140__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__12);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_141__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__13);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_142__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__13);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_143__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__13);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_144__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb9055221__13);
    VlCoroutine __VnoInFunc_wrap8_rd____Vfork_145__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__11);
  public:
    VlCoroutine __VnoInFunc_wrap8_wr(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_126__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4743174c__13);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_127__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h10b61885__0);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_128__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb01d21e5__6);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_129__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h546c482c__12);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_130__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hb5e76593__6);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_131__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h6357bcbf__12);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_132__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_hd34e2e14__12);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_133__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6b7e53b__12);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_134__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hd51d3444__5);
    VlCoroutine __VnoInFunc_wrap8_wr____Vfork_135__0(VlProcessRef vlProcess, Vdesign__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_he6d2a93f__10);
    void _ctor_var_reset(Vdesign__Syms* __restrict vlSymsp);
  public:
    Vdesign___024unit__03a__03adriver() = default;
    void init(Vdesign__Syms* __restrict vlSymsp, VlClassRef<Vdesign_std__03a__03amailbox__Tz1> mbxgd);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdesign___024unit__03a__03adriver() {}
};


#endif  // guard

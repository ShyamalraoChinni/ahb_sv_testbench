// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDESIGN__SYMS_H_
#define VERILATED_VDESIGN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdesign.h"

// INCLUDE MODULE CLASSES
#include "Vdesign___024root.h"
#include "Vdesign___024unit.h"
#include "Vdesign_std.h"
#include "Vdesign_ahb_if.h"
#include "Vdesign___024unit__03a__03atransaction__Vclpkg.h"
#include "Vdesign___024unit__03a__03agenerator__Vclpkg.h"
#include "Vdesign___024unit__03a__03adriver__Vclpkg.h"
#include "Vdesign___024unit__03a__03amonitor__Vclpkg.h"
#include "Vdesign___024unit__03a__03ascoreboard__Vclpkg.h"
#include "Vdesign___024unit__03a__03aenvironment__Vclpkg.h"
#include "Vdesign_std__03a__03asemaphore__Vclpkg.h"
#include "Vdesign_std__03a__03aprocess__Vclpkg.h"
#include "Vdesign_std__03a__03amailbox__Tz1__Vclpkg.h"
#include "Vdesign_std__03a__03amailbox__Tz2__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdesign__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdesign* const __Vm_modelp;
    std::vector<VlAssignableEvent> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdesign___024root              TOP;
    Vdesign___024unit__03a__03adriver__Vclpkg TOP____024unit__03a__03adriver__Vclpkg;
    Vdesign___024unit__03a__03aenvironment__Vclpkg TOP____024unit__03a__03aenvironment__Vclpkg;
    Vdesign___024unit__03a__03agenerator__Vclpkg TOP____024unit__03a__03agenerator__Vclpkg;
    Vdesign___024unit__03a__03amonitor__Vclpkg TOP____024unit__03a__03amonitor__Vclpkg;
    Vdesign___024unit__03a__03ascoreboard__Vclpkg TOP____024unit__03a__03ascoreboard__Vclpkg;
    Vdesign___024unit__03a__03atransaction__Vclpkg TOP____024unit__03a__03atransaction__Vclpkg;
    Vdesign___024unit              TOP____024unit;
    Vdesign_std                    TOP__std;
    Vdesign_ahb_if                 TOP__tb__DOT__aif;
    Vdesign_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vdesign_std__03a__03amailbox__Tz2__Vclpkg TOP__std__03a__03amailbox__Tz2__Vclpkg;
    Vdesign_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vdesign_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vdesign__Syms(VerilatedContext* contextp, const char* namep, Vdesign* modelp);
    ~Vdesign__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void fireEvent(VlAssignableEvent& event) {
        if (VL_LIKELY(!event.isTriggered())) {
            __Vm_triggeredEvents.push_back(event);
        }
        event.fire();
    }
    void clearTriggeredEvents() {
        for (auto& event : __Vm_triggeredEvents) event.clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard

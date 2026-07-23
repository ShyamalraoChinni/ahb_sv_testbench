// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTBDESIGN__SYMS_H_
#define VERILATED_VTBDESIGN__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VTBdesign.h"

// INCLUDE MODULE CLASSES
#include "VTBdesign___024root.h"
#include "VTBdesign___024unit.h"
#include "VTBdesign_std.h"
#include "VTBdesign_ahb_if.h"
#include "VTBdesign___024unit__03a__03atransaction__Vclpkg.h"
#include "VTBdesign___024unit__03a__03agenerator__Vclpkg.h"
#include "VTBdesign___024unit__03a__03adriver__Vclpkg.h"
#include "VTBdesign___024unit__03a__03amonitor__Vclpkg.h"
#include "VTBdesign___024unit__03a__03ascoreboard__Vclpkg.h"
#include "VTBdesign___024unit__03a__03aenvironment__Vclpkg.h"
#include "VTBdesign_std__03a__03asemaphore__Vclpkg.h"
#include "VTBdesign_std__03a__03aprocess__Vclpkg.h"
#include "VTBdesign_std__03a__03amailbox__Tz1__Vclpkg.h"
#include "VTBdesign_std__03a__03amailbox__Tz2__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VTBdesign__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTBdesign* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    std::vector<VlAssignableEvent> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTBdesign___024root            TOP;
    VTBdesign___024unit__03a__03adriver__Vclpkg TOP____024unit__03a__03adriver__Vclpkg;
    VTBdesign___024unit__03a__03aenvironment__Vclpkg TOP____024unit__03a__03aenvironment__Vclpkg;
    VTBdesign___024unit__03a__03agenerator__Vclpkg TOP____024unit__03a__03agenerator__Vclpkg;
    VTBdesign___024unit__03a__03amonitor__Vclpkg TOP____024unit__03a__03amonitor__Vclpkg;
    VTBdesign___024unit__03a__03ascoreboard__Vclpkg TOP____024unit__03a__03ascoreboard__Vclpkg;
    VTBdesign___024unit__03a__03atransaction__Vclpkg TOP____024unit__03a__03atransaction__Vclpkg;
    VTBdesign___024unit            TOP____024unit;
    VTBdesign_std                  TOP__std;
    VTBdesign_ahb_if               TOP__tb__DOT__aif;
    VTBdesign_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    VTBdesign_std__03a__03amailbox__Tz2__Vclpkg TOP__std__03a__03amailbox__Tz2__Vclpkg;
    VTBdesign_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VTBdesign_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    VTBdesign__Syms(VerilatedContext* contextp, const char* namep, VTBdesign* modelp);
    ~VTBdesign__Syms();

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
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard

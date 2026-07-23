// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTBdesign__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTBdesign::VTBdesign(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTBdesign__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__tb__DOT__aif{vlSymsp->TOP.__PVT__tb__DOT__aif}
    , __024unit__03a__03atransaction__Vclpkg{vlSymsp->TOP.__024unit__03a__03atransaction__Vclpkg}
    , __024unit__03a__03agenerator__Vclpkg{vlSymsp->TOP.__024unit__03a__03agenerator__Vclpkg}
    , __024unit__03a__03adriver__Vclpkg{vlSymsp->TOP.__024unit__03a__03adriver__Vclpkg}
    , __024unit__03a__03amonitor__Vclpkg{vlSymsp->TOP.__024unit__03a__03amonitor__Vclpkg}
    , __024unit__03a__03ascoreboard__Vclpkg{vlSymsp->TOP.__024unit__03a__03ascoreboard__Vclpkg}
    , __024unit__03a__03aenvironment__Vclpkg{vlSymsp->TOP.__024unit__03a__03aenvironment__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , std__03a__03amailbox__Tz2__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz2__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VTBdesign::VTBdesign(const char* _vcname__)
    : VTBdesign(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTBdesign::~VTBdesign() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTBdesign___024root___eval_debug_assertions(VTBdesign___024root* vlSelf);
#endif  // VL_DEBUG
void VTBdesign___024root___eval_static(VTBdesign___024root* vlSelf);
void VTBdesign___024root___eval_initial(VTBdesign___024root* vlSelf);
void VTBdesign___024root___eval_settle(VTBdesign___024root* vlSelf);
void VTBdesign___024root___eval(VTBdesign___024root* vlSelf);

void VTBdesign::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTBdesign::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTBdesign___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->clearTriggeredEvents();
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTBdesign___024root___eval_static(&(vlSymsp->TOP));
        VTBdesign___024root___eval_initial(&(vlSymsp->TOP));
        VTBdesign___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTBdesign___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTBdesign::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VTBdesign::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VTBdesign::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VTBdesign::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTBdesign::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTBdesign___024root___eval_final(VTBdesign___024root* vlSelf);

VL_ATTR_COLD void VTBdesign::final() {
    contextp()->executingFinal(true);
    VTBdesign___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTBdesign::hierName() const { return vlSymsp->name(); }
const char* VTBdesign::modelName() const { return "VTBdesign"; }
unsigned VTBdesign::threads() const { return 1; }
void VTBdesign::prepareClone() const { contextp()->prepareClone(); }
void VTBdesign::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTBdesign::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VTBdesign___024root__trace_decl_types(VerilatedVcd* tracep);

void VTBdesign___024root__trace_init_top(VTBdesign___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTBdesign___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTBdesign___024root*>(voidSelf);
    VTBdesign__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VTBdesign___024root__trace_decl_types(tracep);
    VTBdesign___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTBdesign___024root__trace_register(VTBdesign___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTBdesign::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTBdesign::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 35);
    VTBdesign___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

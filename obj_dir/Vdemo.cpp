// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdemo__pch.h"

//============================================================
// Constructors

Vdemo::Vdemo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdemo__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , cnt{vlSymsp->TOP.cnt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdemo::Vdemo(const char* _vcname__)
    : Vdemo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdemo::~Vdemo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdemo___024root___eval_debug_assertions(Vdemo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdemo___024root___eval_static(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_initial(Vdemo___024root* vlSelf);
VL_ATTR_COLD bool Vdemo___024root___eval_stl(Vdemo___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vdemo___024root___eval_sample(Vdemo___024root* vlSelf);
bool Vdemo___024root___eval_ico(Vdemo___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vdemo___024root___eval_act(Vdemo___024root* vlSelf);
bool Vdemo___024root___eval_inact(Vdemo___024root* vlSelf);
bool Vdemo___024root___eval_nba(Vdemo___024root* vlSelf);
bool Vdemo___024root___eval_obs(Vdemo___024root* vlSelf);
bool Vdemo___024root___eval_react(Vdemo___024root* vlSelf);
void Vdemo___024root___eval_postponed(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_final(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_dump_triggers__stl(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_dump_triggers__ico(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_dump_triggers__act(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_dump_triggers__nba(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_dump_triggers__obs(Vdemo___024root* vlSelf);
VL_ATTR_COLD void Vdemo___024root___eval_dump_triggers__react(Vdemo___024root* vlSelf);

void Vdemo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdemo::eval_step\n"); );
    m_evalLoop.eval();
}

void Vdemo::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vdemo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vdemo::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdemo::evalStatic() {
    Vdemo___024root___eval_static(&(vlSymsp->TOP));
}

void Vdemo::evalInitial() {
    Vdemo___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vdemo::evalStl(bool firstIteration) {
    return Vdemo___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vdemo::evalSample() {
    Vdemo___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vdemo::evalIco(bool firstIteration) {
    return Vdemo___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vdemo::evalAct() {
    return Vdemo___024root___eval_act(&(vlSymsp->TOP));
}

bool Vdemo::evalInact() {
    return Vdemo___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vdemo::evalNba() {
    return Vdemo___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vdemo::evalObs() {
    return Vdemo___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vdemo::evalReact() {
    return Vdemo___024root___eval_react(&(vlSymsp->TOP));
}

void Vdemo::evalPostponed() {
    Vdemo___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vdemo::evalFinal() {
    Vdemo___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdemo::dumpTriggersStl() {
    Vdemo___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdemo::dumpTriggersIco() {
    Vdemo___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdemo::dumpTriggersAct() {
    Vdemo___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdemo::dumpTriggersNba() {
    Vdemo___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdemo::dumpTriggersObs() {
    Vdemo___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdemo::dumpTriggersReact() {
    Vdemo___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vdemo::eventsPending() { return false; }

uint64_t Vdemo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdemo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdemo::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdemo::hierName() const { return vlSymsp->name(); }
const char* Vdemo::modelName() const { return "Vdemo"; }
unsigned Vdemo::threads() const { return 1; }
void Vdemo::prepareClone() const { contextp()->prepareClone(); }
void Vdemo::atClone() const {
    contextp()->threadPoolpOnClone();
}

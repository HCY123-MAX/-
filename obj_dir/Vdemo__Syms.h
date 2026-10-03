// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDEMO__SYMS_H_
#define VERILATED_VDEMO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdemo.h"

// INCLUDE MODULE CLASSES
#include "Vdemo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdemo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdemo* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vdemo___024root                TOP;

    // CONSTRUCTORS
    Vdemo__Syms(VerilatedContext* contextp, const char* namep, Vdemo* modelp);
    ~Vdemo__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard

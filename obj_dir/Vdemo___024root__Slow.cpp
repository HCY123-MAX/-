// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemo.h for the primary calling header

#include "Vdemo__pch.h"

void Vdemo___024root___ctor_var_reset(Vdemo___024root* vlSelf);

Vdemo___024root::Vdemo___024root(Vdemo__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdemo___024root___ctor_var_reset(this);
}

void Vdemo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdemo___024root::~Vdemo___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

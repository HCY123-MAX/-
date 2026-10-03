// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdemo.h for the primary calling header

#ifndef VERILATED_VDEMO___024ROOT_H_
#define VERILATED_VDEMO___024ROOT_H_  // guard

#include "verilated.h"


class Vdemo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdemo___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(cnt,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdemo__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdemo___024root(Vdemo__Syms* symsp, const char* namep);
    ~Vdemo___024root();
    VL_UNCOPYABLE(Vdemo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

#include "Vdemo.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vdemo* top = new Vdemo{contextp};

    // 复位
    top->rst_n = 0;
    top->clk = 0;
    top->eval();

    // 释放复位
    top->rst_n = 1;
    for(int i=0; i<20; i++){
        top->clk = !top->clk;
        top->eval();
        std::cout << "Cycle " << i << " | cnt = " << (int)top->cnt << std::endl;
    }

    delete top;
    delete contextp;
    return 0;
}


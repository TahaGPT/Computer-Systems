#pragma once
#include <iostream>
using namespace std;
class CPU {
private:
    ALU alu;
    ControlUnit cu;
public:
    CPU(int adders = 0, int subtractors = 0, int registers = 0, int size = 0, float clk = 0.0)
    {
        alu.setNoOfAdders(adders);
        alu.setNoOfSubtractor(subtractors);
        alu.setNoOfRegisters(registers);
        alu.setSizeOfRegisters(size);
        cu.setClock(clk);
    }

    // Getters and setters
    ALU getALU() const { return alu; }
    void setALU(const ALU& aluObj) { alu = aluObj; }
    ControlUnit getCU() const { return cu; }
    void setCU(const ControlUnit& cuObj) { cu = cuObj; }
    int getPrice()
    {
        return alu.getPrice();
    }
};


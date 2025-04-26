#pragma once
#include <iostream>
using namespace std;
class ControlUnit {
private:
    float clock;
public:
    ControlUnit(float clk = 0.0) : clock(clk) {}
    ControlUnit(const ControlUnit& obj) : clock(obj.clock) {}
    // Getters and setters
    float getClock() const { return clock; }
    void setClock(float clk) { clock = clk; }
};


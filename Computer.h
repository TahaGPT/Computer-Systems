#pragma once
#include "ALU.h"
#include "Battery.h"
#include "Case.h"
#include "ControlUnit.h"
#include "CPU.h"
#include "GraphicsCard.h"
#include "MainMemory.h"
#include "MotherBoard.h"
#include "NetworkCard.h"
#include "PhysicalMemory.h"
#include "Port.h"
#include "PowerSupply.h"
#include "StorageDevice.h"
#include "SiliconChip.h"
#include <iostream>
using namespace std;
class Computer {
private:
    MotherBoard mb;
    CPU cpu;

public:
    Computer(int adders = 0, int subtractors = 0, int registers = 0, int size = 0, float clk = 0.0, string pn[4], int br[4], NetworkCard net, GraphicsCard gc, int cap1 = 0, const string& techType = "", const string& typ = "", int cap2 = 0, PowerSupply p, Case c, Battery ba)
    {
        CPU cp(adders, subtractors, registers, size, clk);
        cpu = cp;
        MotherBoard mbd(pn, br, net, gc, cap1, techType, typ, cap2, p,c, ba);
        mb = mbd;



    }

    
    void setMotherBoard(const MotherBoard& mbObj) { mb = mbObj; }
    CPU getCPU() const { return cpu; }
    void setCPU(const CPU& cpuObj) { cpu = cpuObj; }
    int getPrice()
    {
        return mb.getPrice() + cpu.getPrice();
    }

};


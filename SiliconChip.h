#pragma once
#include "GraphicsCard.h"
#include "CPU.h"
#include <iostream>
using namespace std;
class SiliconChip
{
private:
	GraphicsCard gc;
	CPU cp;

public:
	SiliconChip(string brand = "AppleGPU", int s = 0, int adders = 0, int subtractors = 0, int registers = 0, int size = 0, float clk = 0.0)
	{
		gc.setBrand(brand);
		gc.setMemorySize(s);
		cp.getALU().setNoOfAdders(adders);
		cp.getALU().setNoOfSubtractor(subtractors);
		cp.getALU().setNoOfRegisters(registers);
		cp.getALU().setSizeOfRegisters(size);
		cp.getCU().setClock(clk);
	}




};


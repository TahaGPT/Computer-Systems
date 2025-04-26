#pragma once
#include <iostream>
using namespace std;
class ALU {
private:
    int NoOfAdders;
    int NoOfSubtractor;
    int NoOfRegisters;
    int sizeOfRegisters;
    int price;

public:
    ALU(int adders = 0, int subtractors = 0, int registers = 0, int size = 0)
        : NoOfAdders(adders), NoOfSubtractor(subtractors), NoOfRegisters(registers), sizeOfRegisters(size) {
        price = adders * 100;
    }
    ALU(const ALU& obj);
    // Getters and setters
    int getNoOfAdders() const { return NoOfAdders; }
    void setNoOfAdders(int adders) { NoOfAdders = adders; }
    int getNoOfSubtractor() const { return NoOfSubtractor; }
    void setNoOfSubtractor(int subtractors) { NoOfSubtractor = subtractors; }
    int getNoOfRegisters() const { return NoOfRegisters; }
    void setNoOfRegisters(int registers) { NoOfRegisters = registers; }
    int getSizeOfRegisters() const { return sizeOfRegisters; }
    void setSizeOfRegisters(int size) { sizeOfRegisters = size; }
    double getPrice() const { return price; }
    void setPrice(double pr) { price = pr; }
};


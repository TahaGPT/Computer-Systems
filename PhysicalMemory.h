#pragma once
#include <iostream>
using namespace std;
class PhysicalMemory {
private:
    int capacity;
    string type;
public:
    PhysicalMemory(int cap = 0, const string& typ = "")
        : capacity(cap), type(typ) {}

    // Getters and setters
    int getCapacity() const { return capacity; }
    void setCapacity(int cap) { capacity = cap; }
    string getType() const { return type; }
    void setType(const string& typ) { type = typ; }
};
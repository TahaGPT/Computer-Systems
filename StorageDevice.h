#pragma once
#include "PhysicalMemory.h"
#include <iostream>
using namespace std;
class StorageDevice : public PhysicalMemory
{
private:
    string type;
    double price;
public:
    StorageDevice(const string& typ = "", int cap = 0) : PhysicalMemory(cap)
    {
        type = typ;
        price = cap * 10;
    
    }

    // Getters and setters
    string getType() const { return type; }
    void setType(const string& typ) { type = typ; }
    int getCapacity() const { return PhysicalMemory::getCapacity(); }
    void setCapacity(int cap) {  PhysicalMemory::setCapacity(cap);
    price = cap * 10;
    }
    double getPrice() const { return price; }
    void setPrice(double pr) { price = pr; }
};
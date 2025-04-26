#pragma once
#include "PhysicalMemory.h"
class MainMemory : public PhysicalMemory
{
private:
    string technologyType;
public:
    MainMemory(int cap = 0, const string& techType = "")  : PhysicalMemory(cap)
    {
        technologyType = techType;
    }

    // Getters and setters
    int getCapacity() const { return PhysicalMemory::getCapacity(); }
    void setCapacity(int cap) { PhysicalMemory::setCapacity(cap); }
    string getTechnologyType() const { return technologyType; }
    void setTechnologyType(const string& techType) { technologyType = techType; }
};


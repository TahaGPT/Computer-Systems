#pragma once
#include <iostream>
using namespace std;
class Battery {
private:
    int capacity;
    int price;
public:

    Battery(int cap = 0) : capacity(cap), price(1200) {}
    // Getters and setters
    int getCapacity() const { return capacity; }
    void setCapacity(int cap) { capacity = cap; }
    int getPrice() const { return price; }
    void setPrice(const int p) { price = p; }

};

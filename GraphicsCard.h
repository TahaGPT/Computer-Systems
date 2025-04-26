#pragma once
#include <iostream>
using namespace std;
class GraphicsCard {
private:
    string brand;
    int memorySize;
    double price;
public:
    GraphicsCard(const string& br = "", int size = 0)
        : brand(br), memorySize(size) {
        price = memorySize * 100;
    }


    GraphicsCard(GraphicsCard& obj)
    {
        brand = obj.memorySize;
        memorySize = obj.memorySize;
        price = obj.price;
    }
    // Getters and setters
    string getBrand() const { return brand; }
    void setBrand(const string& br) { brand = br; }
    int getMemorySize() const { return memorySize; }
    void setMemorySize(int size) { memorySize = size;
    price = memorySize * 100;
    }
    double getPrice() const { return price; }
    void setPrice(double pr) { price = pr; }
};
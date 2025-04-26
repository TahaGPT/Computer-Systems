#pragma once
#include <iostream>
using namespace std;
class PowerSupply {
private:
    int wattage;
    string efficiencyRating;
    double price;
public:

    PowerSupply(int watt = 0, const string& rating = "")
        : wattage(watt), efficiencyRating(rating) 
    {
        price = wattage * 5;

    }

    // Getters and setters
    int getWattage() const { return wattage; }
    void setWattage(int watt) { wattage = watt; }
    string getEfficiencyRating() const { return efficiencyRating; }
    void setEfficiencyRating(const string& rating) { efficiencyRating = rating; }
    double getPrice() const { return price; }
    void setPrice(double pr) { price = pr; }
};


#pragma once
#include <iostream>
#include <string>
using namespace std;


class Case {
private:
    int price;
    string formFactor;
    string color;
public:
    Case(const string& form = "", const string& clr = "") : formFactor(form), color(clr), price(14000)  {}
    // Getters and setters
    string getFormFactor() const { return formFactor; }
    void setFormFactor(const string& form) { formFactor = form; }
    string getColor() const { return color; }
    void setColor(const string& clr) { color = clr; }
    int getPrice() const { return price; }
    void setPrice(const int p) { price = p; }


};


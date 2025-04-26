#pragma once
#include <iostream>
using namespace std;
class NetworkCard {
private:
    string type;
    int speed;
    double price;
public:
    NetworkCard(const string& typ = "", int spd = 0)
        : type(typ), speed(spd) {
        price = speed * 100;
    }
    // Getters and setters
    string getType() const { return type; }
    void setType(const string& typ) { type = typ; }
    int getSpeed() const { return speed; }
    void setSpeed(int spd) { speed = spd; }
    double getPrice() const { return price; }
    void setPrice(double pr) { price = pr; }
};

#pragma once
class Port
{
private:
    string type;
    int baud_rate;
public:
    Port(const string& typ = "", int baud = 0) : type(typ), baud_rate(baud) {}

    // Getters and setters
    string getType() const { return type; }
    void setType(const string& typ) { type = typ; }
    int getBaudRate() const { return baud_rate; }
    void setBaudRate(int baud) { baud_rate = baud; }
};


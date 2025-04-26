#pragma once
#include "NetworkCard.h"
#include "StorageDevice.h"
#include "Port.h"
#include "PowerSupply.h"
#include "Battery.h"
class MotherBoard {
private:
    MainMemory mm;
    Port ports[4]; // Assuming there are 4 ports
    NetworkCard nc;
    StorageDevice sd;
    PowerSupply ps;
    Battery b;
    GraphicsCard g;
    Case ca;
    int price;
public:
    MotherBoard(string pn[4], int br[4], NetworkCard net, GraphicsCard gc, int cap1 = 0, const string& techType = "",  const string& typ = "", int cap2 = 0, PowerSupply p, Case c, Battery ba)
    {
        for (int i = 0; i < 4; i++)
        {
            ports[i].setBaudRate(br[i]);
            ports[i].setType(pn[i]);
            nc.setPrice(net.getPrice());
            nc.setSpeed(net.getSpeed());
            nc.setType(net.getType());
            mm.setCapacity(cap1);
            mm.setTechnologyType(techType);
            sd.setCapacity(cap2);
            sd.setType(typ);

        }
        
        nc = net;
        g = gc;
        MainMemory m(cap1, techType);
        mm = m;
        StorageDevice s(typ, cap2);
        sd = s;
        ps = p;
        b = ba;
        ca = c;
        price = 321120;


    }
    // Getters and setters
    MainMemory getMainMemory() const { return mm; }
    void setMainMemory(const MainMemory& memObj) { mm = memObj; }
    Port* getPorts() { return ports; }
    const Port* getPorts() const { return ports; }
    void setPorts(const Port* portArr) {
        for (int i = 0; i < 4; ++i) {
            ports[i] = portArr[i];
        }
    }
    int getPrice()
    {
        return nc.getPrice() + sd.getPrice() + ps.getPrice() + b.getPrice() + g.getPrice() + ca.getPrice();

    }
};

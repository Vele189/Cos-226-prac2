#ifndef BOATMAN_FACTORY_H
#define BOATMAN_FACTORY_H

#include "Boatman.h"
#include "SoldierFactory.h"
#include <iostream>
using namespace std;

class BoatmanFactory: public SoldierFactory
{
    
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};
#endif

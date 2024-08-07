#ifndef INFANTRY_FACTORY_H
#define INFANTRY_FACTORY_H

#include "Infantry.h"
#include "SoldierFactory.h"
#include <iostream>
using namespace std;

class InfantryFactory: public SoldierFactory
{
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};
#endif

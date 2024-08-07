#ifndef SHIELD_BEARER_FACTORY_H
#define SHIELD_BEARER_FACTORY_H

#include "ShieldBearer.h"
#include "SoldierFactory.h"
#include <iostream>
using namespace std;

class ShieldBearerFactory: public SoldierFactory
{
   
    public:
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
};
#endif

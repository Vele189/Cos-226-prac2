#ifndef BOATMAN_FACTORY_H
#define BOATMAN_FACTORY_H

#include "Boatman.h"
#include "SoldierFactory.h"
#include <iostream>
using namespace std;

class BoatmanFactory: public SoldierFactory
{
    
    public:
<<<<<<< HEAD
        Soldiers* createUnit() override;
        int calculateTotalHealthPerUnit() override;
        int calculateTotalDamagePerUnit() override;
        int calculateTotalDefencePerUnit() override;
=======
        Soldiers* createUnit();
        int calculateTotalHealthPerUnit();
        int calculateTotalDamagePerUnit();
        int calculateTotalDefencePerUnit();
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
};
#endif

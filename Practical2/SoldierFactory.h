#ifndef SOLDIER_FACTORY_H
#define SOLDIER_FACTORY_H

#include "Soldiers.h"
#include <iostream>
using namespace std;

class SoldierFactory
{
    
    protected:
        Soldiers* soldiers; //originally private in spec
        virtual Soldiers* createUnit() = 0;
        virtual int calculateTotalHealthPerUnit() = 0;
        virtual int calculateTotalDamagePerUnit() = 0;
        virtual int calculateTotalDefencePerUnit() = 0;
};
#endif

//This is The abstract base class that will act as the 'creator' participant in the factory method

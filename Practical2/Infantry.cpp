#include "Soldiers.h"
#include "Infantry.h"
#include <iostream>

using namespace std;

Infantry::Infantry(int hPS, int dPS, int defPS, int aSP, string uN)
:Soldiers(hPS, dPS, defPS, aSP, uN)
{
   
}

//the clone function to create a prototype of the boatman
Soldiers* Infantry::clonis()
{
    return new Infantry(*this);
}

string Infantry::getSoldierType()
{
    return "This clone is a Infantry.\n";
}

int Infantry::getHealthPerSoldier()
{
    return this->healthPerSoldier;
}

int Infantry::getDamagePerSoldier()
{
    return this->damagePerSoldier;
}

int Infantry::getDefencePerSoldier()
{
    return this->defencePerSoldier;
}

int Infantry::getAmountOfSoldiersPerUnit()
{
    return this->amountOfSoldiersPerUnit;
}

string Infantry::getUnitName()
{
    return this->unitName;
}

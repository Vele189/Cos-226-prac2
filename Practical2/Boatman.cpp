#include "Soldiers.h"
#include "Boatman.h"
#include <iostream>

using namespace std;

Boatman::Boatman(int hPS, int dPS, int defPS, int aSP, string uN)
:Soldiers(hPS, dPS, defPS, aSP, uN)
{
   
}

//the clone function to create a prototype of the boatman
Soldiers* Boatman::clonis()
{
    return new Boatman(*this);
}

string Boatman::getSoldierType()
{
    return "This clone is a Boatman.\n";
}

int Boatman::getHealthPerSoldier()
{
    return this->healthPerSoldier;
}

int Boatman::getDamagePerSoldier()
{
    return this->damagePerSoldier;
}

int Boatman::getDefencePerSoldier()
{
    return this->defencePerSoldier;
}

int Boatman::getAmountOfSoldiersPerUnit()
{
    return this->amountOfSoldiersPerUnit;
}

string Boatman::getUnitName()
{
    return this->unitName;
}

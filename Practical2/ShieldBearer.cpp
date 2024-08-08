#include "Soldiers.h"
#include "ShieldBearer.h"
#include <iostream>

using namespace std;

ShieldBearer::ShieldBearer(int hPS, int dPS, int defPS, int aSP, string uN)
:Soldiers(hPS, dPS, defPS, aSP, uN)
{
   
}

//the clone function to create a prototype of the ShieldBearer
Soldiers* ShieldBearer::clonis()
{
    return new ShieldBearer(*this);
}

string ShieldBearer::getSoldierType()
{
    return "This clone is a ShieldBearer.\n";
}

int ShieldBearer::getHealthPerSoldier()
{
    return this->healthPerSoldier;
}

int ShieldBearer::getDamagePerSoldier()
{
    return this->damagePerSoldier;
}

int ShieldBearer::getDefencePerSoldier()
{
    return this->defencePerSoldier;
}

int ShieldBearer::getAmountOfSoldiersPerUnit()
{
    return this->amountOfSoldiersPerUnit;
}

string ShieldBearer::getUnitName()
{
    return this->unitName;
}

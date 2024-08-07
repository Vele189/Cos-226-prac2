#include "ShieldBearerFactory.h"
#include "ShieldBearer.h"

#include <iostream>

using namespace std;

Soldiers* ShieldBearerFactory::createUnit()
{
    this->soldiers = new ShieldBearer(); //returns a unit of ShieldBearer Soldiers with the default characteristics
    return this->soldiers;
}

int ShieldBearerFactory::calculateTotalDamagePerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDamagePerSoldier();
}

int ShieldBearerFactory::calculateTotalDefencePerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDefencePerSoldier();
}

int ShieldBearerFactory::calculateTotalHealthPerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getHealthPerSoldier();

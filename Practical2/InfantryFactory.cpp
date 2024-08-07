#include "InfantryFactory.h"
#include "Infantry.h"

#include <iostream>

using namespace std;

Soldiers* InfantryFactory::createUnit()
{
    this->soldiers = new Infantry(); //returns a unit of Infantry Soldiers with the default characteristics
    return this->soldiers;
}

int InfantryFactory::calculateTotalDamagePerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDamagePerSoldier();
}

int InfantryFactory::calculateTotalDefencePerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDefencePerSoldier();
}

int InfantryFactory::calculateTotalHealthPerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getHealthPerSoldier();

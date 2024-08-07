#include "BoatmanFactory.h"
#include "Boatman.h"

#include <iostream>

using namespace std;

Soldiers* BoatmanFactory::createUnit()
{
    this->soldiers = new Boatman(); //returns a unit of Boatman Soldiers with the default characteristics
    return this->soldiers;
}

int BoatmanFactory::calculateTotalDamagePerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDamagePerSoldier();
}

int BoatmanFactory::calculateTotalDefencePerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDefencePerSoldier();
}

int BoatmanFactory::calculateTotalHealthPerUnit()
{
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getHealthPerSoldier();
}

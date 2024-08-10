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
<<<<<<< HEAD
    if (this->soldiers == nullptr) {
        cerr << "Error: soldiers object is not created." << endl;
        return 0;
    }

    return this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDamagePerSoldier();
=======
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDamagePerSoldier();
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
}

int ShieldBearerFactory::calculateTotalDefencePerUnit()
{
<<<<<<< HEAD
    if (this->soldiers == nullptr) {
        cerr << "Error: soldiers object is not created." << endl;
        return 0;
    }

    return this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDefencePerSoldier();
=======
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDefencePerSoldier();
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
}

int ShieldBearerFactory::calculateTotalHealthPerUnit()
{
<<<<<<< HEAD
    if (this->soldiers == nullptr) {
        cerr << "Error: soldiers object is not created." << endl;
        return 0;
    }
    
    return this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getHealthPerSoldier();
}
=======
    this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getHealthPerSoldier();
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

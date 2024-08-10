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

int InfantryFactory::calculateTotalDefencePerUnit()
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

int InfantryFactory::calculateTotalHealthPerUnit()
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

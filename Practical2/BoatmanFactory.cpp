#include "BoatmanFactory.h"
#include "Boatman.h"

#include <iostream>

using namespace std;

<<<<<<< HEAD
// Create and return a new Boatman unit
Soldiers* BoatmanFactory::createUnit()
{
    delete this->soldiers; // Free any previously allocated memory
    this->soldiers = new Boatman(); // Allocate new Boatman unit
    return this->soldiers;
}

// Calculate total damage per unit
int BoatmanFactory::calculateTotalDamagePerUnit()
{
    if (this->soldiers == nullptr) {
        cerr << "Error: soldiers object is not created." << endl;
        return 0;
    }
    return this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDamagePerSoldier();
}

// Calculate total defense per unit
int BoatmanFactory::calculateTotalDefencePerUnit()
{
    if (this->soldiers == nullptr) {
        cerr << "Error: soldiers object is not created." << endl;
        return 0;
    }
    return this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getDefencePerSoldier();
}

// Calculate total health per unit
int BoatmanFactory::calculateTotalHealthPerUnit()
{
    if (this->soldiers == nullptr) {
        cerr << "Error: soldiers object is not created." << endl;
        return 0;
    }
    return this->soldiers->getAmountOfSoldiersPerUnit() * this->soldiers->getHealthPerSoldier();
}


=======
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
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

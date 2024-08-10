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

<<<<<<< HEAD

std::string Infantry::getSoldierType()
{
    return "This clone is an Infantry unit.\n";
}




=======
string Infantry::getSoldierType()
{
    return "This clone is a Infantry.\n";
}

>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
int Infantry::getHealthPerSoldier()
{
    return this->healthPerSoldier;
}

<<<<<<< HEAD


=======
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
int Infantry::getDamagePerSoldier()
{
    return this->damagePerSoldier;
}

<<<<<<< HEAD


=======
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
int Infantry::getDefencePerSoldier()
{
    return this->defencePerSoldier;
}

int Infantry::getAmountOfSoldiersPerUnit()
{
    return this->amountOfSoldiersPerUnit;
}

<<<<<<< HEAD
std::string Infantry::getUnitName()
{
    return this->unitName;
}


void Infantry::prepare() {
    std::cout << "Infantry preparing: forming ranks and checking equipment." << std::endl;
}


void Infantry::execute() {
    std::cout << "Infantry executing: advancing and engaging the enemy." << std::endl;
}

void Infantry::retreat() {

    std::cout << "Infantry retreating: falling back to a defensive position." << std::endl;
}

void Infantry::rest() {
    std::cout << "Infantry resting: resting and tending to injuries." << std::endl;
}

Infantry::~Infantry() {
    // Destructor implementation if needed
}
=======
string Infantry::getUnitName()
{
    return this->unitName;
}
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

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

<<<<<<< HEAD
std::string Boatman::getSoldierType() 
=======
string Boatman::getSoldierType()
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
{
    return "This clone is a Boatman.\n";
}

<<<<<<< HEAD
int Boatman::getHealthPerSoldier() 
=======
int Boatman::getHealthPerSoldier()
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
{
    return this->healthPerSoldier;
}

<<<<<<< HEAD
int Boatman::getDamagePerSoldier() 
=======
int Boatman::getDamagePerSoldier()
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
{
    return this->damagePerSoldier;
}

<<<<<<< HEAD
int Boatman::getDefencePerSoldier() 
=======
int Boatman::getDefencePerSoldier()
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
{
    return this->defencePerSoldier;
}

<<<<<<< HEAD
int Boatman::getAmountOfSoldiersPerUnit() 
=======
int Boatman::getAmountOfSoldiersPerUnit()
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
{
    return this->amountOfSoldiersPerUnit;
}

<<<<<<< HEAD
std::string Boatman::getUnitName() 
{
    return this->unitName;
}

void Boatman::prepare() {
    std::cout << "Boatman preparing: boarding boats and checking supplies." << std::endl;
}

void Boatman::execute() {
    std::cout << "Boatman executing: navigating the boat and attacking from water." << std::endl;
}

void Boatman::retreat() {
    std::cout << "Boatman retreating: navigating away from combat and seeking refuge." << std::endl;
}

void Boatman::rest() {
    std::cout << "Boatman resting: docking the boat and resting." << std::endl;
}

Boatman::~Boatman() {
    // Destructor implementation if needed
}
=======
string Boatman::getUnitName()
{
    return this->unitName;
}
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

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

<<<<<<< HEAD
std::string ShieldBearer::getSoldierType()
=======
string ShieldBearer::getSoldierType()
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
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

<<<<<<< HEAD
std::string ShieldBearer::getUnitName()
{
    return this->unitName;
}

void ShieldBearer::prepare() {
    std::cout << "ShieldBearer preparing: adjusting shields and checking formations." << std::endl;
}

void ShieldBearer::execute() {
    std::cout << "ShieldBearer executing: forming defensive line and blocking attacks." << std::endl;
}


void ShieldBearer::retreat() {
    std::cout << "ShieldBearer retreating: covering the retreat and withdrawing." << std::endl;
}

void ShieldBearer::rest() {
    std::cout << "ShieldBearer resting: maintaining shields and taking a break." << std::endl;
}

ShieldBearer::~ShieldBearer() {
    // Destructor implementation if needed
}
=======
string ShieldBearer::getUnitName()
{
    return this->unitName;
}
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

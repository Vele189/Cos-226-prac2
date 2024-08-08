#include "Soldiers.h"
#include <iostream>

using namespace std;

Soldiers::Soldiers(int hPS, int dPS, int defPS, int aSP, string uN)
{
    this->healthPerSoldier = hPS;
    this->damagePerSoldier = dPS;
    this->defencePerSoldier = defPS;
    this->amountOfSoldiersPerUnit = aSP;
    this->unitName = uN;
}
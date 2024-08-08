#ifndef SHIELD_BEARER_H
#define SHIELD_BEARER_H

#include "Soldiers.h"

class ShieldBearer: public Soldiers
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
    
    public:
        ShieldBearer(int hPS = 100, int dPS =70, int defPS =50 , int aSP = 150, string uN = "ShieldBearer Unit");
        Soldiers* clonis();
        ~ShieldBearer();
        string getSoldierType();
        int getHealthPerSoldier();
        int getDamagePerSoldier();
        int getDefencePerSoldier();
        int getAmountOfSoldiersPerUnit();
        string getUnitName();
};
#endif
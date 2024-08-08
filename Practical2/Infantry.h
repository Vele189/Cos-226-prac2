#ifndef INFANTRY_H
#define INFANTRY_H

#include "Soldiers.h"

class Infantry: public Soldiers
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
    
    public:
        Infantry(int hPS =150, int dPS = 90, int defPS = 50, int aSP = 200, string uN = "Infantry Unit");
        Soldiers* clonis();
        ~Infantry();
        string getSoldierType();
        int getHealthPerSoldier();
        int getDamagePerSoldier();
        int getDefencePerSoldier();
        int getAmountOfSoldiersPerUnit();
        string getUnitName();
};
#endif
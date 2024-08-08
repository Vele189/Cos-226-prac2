#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"

class Boatman: public Soldiers
{
    private:
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
        string unitName;
    
    public:
        Boatman(int hPS = 50, int dPS =20, int defPS =10, int aSP =100, string uN = "Boatman Unit");
        Soldiers* clonis();
        ~Boatman();
        string getSoldierType();
        int getHealthPerSoldier();
        int getDamagePerSoldier();
        int getDefencePerSoldier();
        int getAmountOfSoldiersPerUnit();
        string getUnitName();
};
#endif
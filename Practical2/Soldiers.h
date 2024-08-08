#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>

using namespace std;

class Soldiers
{
    private:
         int healthPerSoldier;
         int damagePerSoldier;
         int defencePerSoldier;
         int amountOfSoldiersPerUnit;
         string unitName;

    public:

        Soldiers(int hPS, int dPS, int defPS, int aSP, string uN);
        virtual Soldiers* clonis() = 0;
        //Soldiers(const Soldiers &soldier);
        //Soldiers operator=(Soldiers &sol);
        virtual ~Soldiers();
        virtual string getSoldierType() =0;
        virtual int getHealthPerSoldier() =0;
        virtual int getDamagePerSoldier() =0;
        virtual int getDefencePerSoldier() =0;
        virtual int getAmountOfSoldiersPerUnit() =0;
        virtual string getUnitName() =0;

        /*not necessary to create my own copy constructor because
        there is no dynamic memory being used and deep copies do not
        need to be created.*/

};
#endif
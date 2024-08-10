#ifndef INFANTRY_H
#define INFANTRY_H

#include "Soldiers.h"

class Infantry: public Soldiers
{
<<<<<<< HEAD
    protected:
=======
    private:
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
        int healthPerSoldier;
        int damagePerSoldier;
        int defencePerSoldier;
        int amountOfSoldiersPerUnit;
<<<<<<< HEAD
        std::string unitName;

    void prepare() override;
    void execute() override;
    void retreat() override;
    void rest() override;
    
    public:


        Infantry(int hPS =150, int dPS = 90, int defPS = 50, int aSP = 200, string uN = "Infantry Unit");



        //Infantry* clonis() override;
         Soldiers* clonis() override;



        ~Infantry(); //destructor 

        //additional methods
        std::string getSoldierType() override;
        int getHealthPerSoldier() override;
        int getDamagePerSoldier() override;
        int getDefencePerSoldier() override;
        int getAmountOfSoldiersPerUnit() override;
        std::string getUnitName() override;
=======
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
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
};
#endif
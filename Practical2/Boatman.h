#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"

class Boatman: public Soldiers
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
        Boatman(int hPS = 50, int dPS =20, int defPS =10, int aSP =100, string uN = "Boatman Unit");

        Soldiers* clonis() override;
        
        //getter functions

         std::string getSoldierType() override;
        int getHealthPerSoldier() override;
        int getDamagePerSoldier() override;
        int getDefencePerSoldier() override;
        int getAmountOfSoldiersPerUnit() override;
        std::string getUnitName() override;

        ~Boatman();
=======
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
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
};
#endif
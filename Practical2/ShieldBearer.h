#ifndef SHIELD_BEARER_H
#define SHIELD_BEARER_H

#include "Soldiers.h"

<<<<<<< HEAD
class ShieldBearer : public Soldiers
{
protected:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName; 

    void prepare() override;
    void execute() override;
    void retreat() override;
    void rest() override;

public:
    ShieldBearer(int hPS = 100, int dPS = 70, int defPS = 50, int aSP = 150, std::string uN = "ShieldBearer Unit");

    Soldiers* clonis() override;

    ~ShieldBearer(); // Destructor

    // Additional methods
    std::string getSoldierType() override;
    int getHealthPerSoldier() override;
    int getDamagePerSoldier() override;
    int getDefencePerSoldier() override;
    int getAmountOfSoldiersPerUnit() override;
    std::string getUnitName() override;
};

#endif // SHIELD_BEARER_H
=======
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
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

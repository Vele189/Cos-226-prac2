#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <iostream>
<<<<<<< HEAD
#include "Memento.h"
=======
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

using namespace std;

class Soldiers
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


    virtual void prepare() = 0;
    virtual void execute() = 0;
    virtual void retreat() = 0;
    virtual void rest() = 0;
=======
         string unitName;
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

    public:

        Soldiers(int hPS, int dPS, int defPS, int aSP, string uN);
<<<<<<< HEAD

        virtual Soldiers* clonis() = 0;

        //memento stuff
        Memento* militusMemento();
        void vivificaMemento(Memento* memento);


        void engage();
        void disengage();



        virtual ~Soldiers();


        virtual std::string getSoldierType() =0;
=======
        virtual Soldiers* clonis() = 0;
        //Soldiers(const Soldiers &soldier);
        //Soldiers operator=(Soldiers &sol);
        virtual ~Soldiers();
        virtual string getSoldierType() =0;
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
        virtual int getHealthPerSoldier() =0;
        virtual int getDamagePerSoldier() =0;
        virtual int getDefencePerSoldier() =0;
        virtual int getAmountOfSoldiersPerUnit() =0;
<<<<<<< HEAD
        virtual std::string getUnitName() =0;

      

=======
        virtual string getUnitName() =0;
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3

        /*not necessary to create my own copy constructor because
        there is no dynamic memory being used and deep copies do not
        need to be created.*/

<<<<<<< HEAD
    


=======
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
};
#endif
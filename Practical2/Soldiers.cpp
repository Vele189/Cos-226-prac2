#include "Soldiers.h"
<<<<<<< HEAD
#include "Memento.h"



=======
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
#include <iostream>

using namespace std;

Soldiers::Soldiers(int hPS, int dPS, int defPS, int aSP, string uN)
{
    this->healthPerSoldier = hPS;
    this->damagePerSoldier = dPS;
    this->defencePerSoldier = defPS;
    this->amountOfSoldiersPerUnit = aSP;
    this->unitName = uN;
<<<<<<< HEAD
}


//memento stuff

Memento* Soldiers::militusMemento() {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}


void Soldiers::vivificaMemento(Memento* memento) {

    if (memento) { 
        healthPerSoldier = memento->healthPerSoldier;
        damagePerSoldier = memento->damagePerSoldier;
        defencePerSoldier = memento->defencePerSoldier;
        amountOfSoldiersPerUnit = memento->amountOfSoldiersPerUnit;
        unitName = memento->unitName;
    }

    else{
        cerr << "Error: Memento is null. Cannot restore state." << endl;
    }


}

void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}

Soldiers::~Soldiers() {
    // Destructor implementation if needed
=======
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
}
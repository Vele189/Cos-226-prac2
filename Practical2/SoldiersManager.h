#ifndef SOLDIERS_MANAGER_H
#define SOLDIERS_MANAGER_H

#include "Soldiers.h"
#include <map>
#include <iostream>

using namespace std;
 
class SoldiersManager
{

    private:
        map<string, Soldiers*> soldierUnitStore; //this  stores all of the clones that the client has created
    
    public:
        void addSoldierUnit(Soldiers* sol); //adds a protoype
        void removeSoldierUnit(Soldiers* sol);//removes a protoype 
        Soldiers* getSoldierUnit();
<<<<<<< HEAD
        std::string printSoldierUnits(); //prints a list of all the created clones
        ~SoldiersManager();

=======
        string printSoldierUnits(); //prints a list of all the created clones
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3


};
#endif
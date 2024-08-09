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
        string printSoldierUnits(); //prints a list of all the created clones


};
#endif
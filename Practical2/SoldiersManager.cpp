#include "Soldiers.h"
#include "Infantry.h"
#include "Boatman.h"
#include "ShieldBearer.h"
#include "SoldiersManager.h"
#include <map>
#include <iostream>

using namespace std;

void SoldiersManager::addSoldierUnit(Soldiers* sol)
{
    //check if the provided prototype to clone is not null or if there is space
    if(sol == nullptr || this->soldierUnitStore.size() == this->soldierUnitStore.max_size())
    {
        cout<<"Unable to create a new prototype.\n";
    }
    else
    {
        Soldiers* clone = sol->clonis();
        this->soldierUnitStore[clone->getUnitName()] = clone; //adding the new protype
    }
}

void SoldiersManager::removeSoldierUnit(Soldiers* sol)//removes a protoype
{
    if(this->soldierUnitStore.empty() || sol == nullptr)
    {
        cout<<"Unable to remove this prototype because it doesn't exist.\n";
    }
    else
    {
       delete this->soldierUnitStore.at(sol->getUnitName());
       this->soldierUnitStore.erase(sol->getUnitName()); //not sure
    }
}
        
string SoldiersManager::printSoldierUnits() //prints a list of all the created protoypes
{
    if(this->soldierUnitStore.empty() == false)
    {
        map<string, Soldiers*>::iterator it;
        cout<<"This is a list of all the available prototypes: \n";
        for (it = this->soldierUnitStore.begin(); it != this->soldierUnitStore.end(); ++it) {
            cout << "Unit Name: "<< it->first << " : ";
            cout<<"Amount of Soldiers in Unit: "<<it->second->getAmountOfSoldiersPerUnit()<<"\n";
            cout<<"Defence Per Soldier: "<<it->second->getDefencePerSoldier()<<"\n";
            cout<<"Health Per Soldier: "<<it->second->getHealthPerSoldier()<<"\n";
            cout<<"Damage Per Soldier: "<<it->second->getDamagePerSoldier()<<"\n";
            cout<<"------------------------------------------------------------"<<endl;
        }
    }
}

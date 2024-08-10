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
<<<<<<< HEAD
        return;
    }

        Soldiers* clone = sol->clonis();
        this->soldierUnitStore[clone->getUnitName()] = clone;      
}



=======
    }
    else
    {
        Soldiers* clone = sol->clonis();
        this->soldierUnitStore[clone->getUnitName()] = clone; //adding the new protype
    }
}

>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
void SoldiersManager::removeSoldierUnit(Soldiers* sol)//removes a protoype
{
    if(this->soldierUnitStore.empty() || sol == nullptr)
    {
        cout<<"Unable to remove this prototype because it doesn't exist.\n";
<<<<<<< HEAD
        return;
    }

    auto it = this->soldierUnitStore.find(sol->getUnitName());
    if (it != this->soldierUnitStore.end()) {
        delete it->second; // Free the dynamically allocated memory
        this->soldierUnitStore.erase(it); // Remove the prototype from the map
        }

    else
    {
        cout << "Unable to remove this prototype: prototype does not exist.\n";
    }
}
        


string SoldiersManager::printSoldierUnits() //prints a list of all the created protoypes
{
    if (this->soldierUnitStore.empty()) {
        return "No soldier units available.";
    }

    string result;
    result += "This is a list of all the available prototypes: \n";
    for (const auto& pair : this->soldierUnitStore) {
        result += "Unit Name: " + pair.first + " : \n";
        result += "Amount of Soldiers in Unit: " + to_string(pair.second->getAmountOfSoldiersPerUnit()) + "\n";
        result += "Defence Per Soldier: " + to_string(pair.second->getDefencePerSoldier()) + "\n";
        result += "Health Per Soldier: " + to_string(pair.second->getHealthPerSoldier()) + "\n";
        result += "Damage Per Soldier: " + to_string(pair.second->getDamagePerSoldier()) + "\n";
        result += "------------------------------------------------------------\n";
    }
    return result;
}

SoldiersManager::~SoldiersManager(){
    if(this->soldierUnitStore.empty() != false){

        map<string, Soldiers*>::iterator it;
        for(it = this->soldierUnitStore.begin(); it != this->soldierUnitStore.end(); ++it){

            if(it->second != nullptr){
                delete it->second;
            }

            this->soldierUnitStore.clear();


        }

=======
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
>>>>>>> f405b0f959284354c44742742fb633eebe78f7e3
    }
}

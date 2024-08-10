#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

class Memento {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;

public:
    Memento(int h, int d, int def, int a, const std::string& name);
    
    friend class Soldiers;
};

#endif // MEMENTO_H

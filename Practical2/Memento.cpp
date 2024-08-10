#include "Memento.h"

Memento::Memento(int h, int d, int def, int a, const std::string& name)
    : healthPerSoldier(h), damagePerSoldier(d), defencePerSoldier(def), amountOfSoldiersPerUnit(a), unitName(name) {}

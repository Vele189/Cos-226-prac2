#include "InfantryFactory.h"
#include "BoatmanFactory.h"
#include "ShieldBearerFactory.h"
#include "SoldiersManager.h"
#include "Memento.h"
#include <iostream>

using namespace std;

int main() {
    SoldiersManager manager;

    // Create factories
    InfantryFactory infantryFactory;
    BoatmanFactory boatmanFactory;
    ShieldBearerFactory shieldBearerFactory;

    // Create soldier units using factories
    Soldiers* infantryUnit = infantryFactory.createUnit();
    Soldiers* boatmanUnit = boatmanFactory.createUnit();
    Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();

    // Add soldier units to the manager
    manager.addSoldierUnit(infantryUnit);
    manager.addSoldierUnit(boatmanUnit);
    manager.addSoldierUnit(shieldBearerUnit);

    // Print soldier units
    cout << "Initial soldier units:" << endl;
    cout << manager.printSoldierUnits() << endl;

    // Test cloning functionality
    Soldiers* clonedInfantry = infantryUnit->clonis();
    Soldiers* clonedBoatman = boatmanUnit->clonis();
    Soldiers* clonedShieldBearer = shieldBearerUnit->clonis();

    manager.addSoldierUnit(clonedInfantry);
    manager.addSoldierUnit(clonedBoatman);
    manager.addSoldierUnit(clonedShieldBearer);

    // Print soldier units after adding clones
    cout << "Soldier units after cloning:" << endl;
    cout << manager.printSoldierUnits() << endl;

    // Test removing soldier units
    manager.removeSoldierUnit(infantryUnit);
    manager.removeSoldierUnit(boatmanUnit);
    manager.removeSoldierUnit(shieldBearerUnit);

    // Print soldier units after removal
    cout << "Soldier units after removal:" << endl;
    cout << manager.printSoldierUnits() << endl;

    // Test with null pointers
    manager.removeSoldierUnit(nullptr);

    // Test memento functionality
    Memento* infantryMemento = infantryUnit->militusMemento();
    Memento* boatmanMemento = boatmanUnit->militusMemento();
    Memento* shieldBearerMemento = shieldBearerUnit->militusMemento();

    // Modify the units
    infantryUnit->engage();
    boatmanUnit->engage();
    shieldBearerUnit->engage();

    // Restore units from memento
    infantryUnit->vivificaMemento(infantryMemento);
    boatmanUnit->vivificaMemento(boatmanMemento);
    shieldBearerUnit->vivificaMemento(shieldBearerMemento);

    // Print restored soldier units
    cout << "Restored soldier units:" << endl;
    cout << manager.printSoldierUnits() << endl;

    // Cleanup
    delete infantryUnit;
    delete boatmanUnit;
    delete shieldBearerUnit;
    delete clonedInfantry;
    delete clonedBoatman;
    delete clonedShieldBearer;
    delete infantryMemento;
    delete boatmanMemento;
    delete shieldBearerMemento;

    return 0;
}

#include "CareTaker.h"

void CareTaker::addMemento(Memento* m) {
    mementos.push_back(m);
}

Memento* CareTaker::getMemento(int index) {
    
   if (index < 0 || index >= static_cast<int>(mementos.size())) {
        return nullptr; // Return nullptr if index is out of bounds
    }

     return mementos[index];
}

CareTaker::~CareTaker() {
    for (Memento* m : mementos) {
        delete m;
    }
    mementos.clear(); // Clear the vector (optional but good practice)
}

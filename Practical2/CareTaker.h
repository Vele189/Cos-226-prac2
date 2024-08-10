#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include <vector>

class CareTaker {
private:
    std::vector<Memento*> mementos;
public:
    void addMemento(Memento* m);
    Memento* getMemento(int index);
    ~CareTaker();
};

#endif // CARETAKER_H

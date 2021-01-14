#ifndef ISQUAD
#define ISQUAD
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

class ISquad {
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine*) = 0;
};

#endif
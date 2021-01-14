#include "Character.hpp"
#include <iostream>

const std::string & Character::getName() const {
    return name;
}

Character::Character() {
    return;
}

Character::~Character() {
    return;
}

Character::Character(std::string name){
    int i;

    this->name = name;
    i = 0;
    while(i < 4)
        am_list[i++] = 0;
    n = 0;
    return;
}

void Character::equip(AMateria *m) {
    if(n == 4 || m == 0)
        return;
    int i;

    i = 0;
    while (i < 4) {
        if (am_list[i] == 0) {
            am_list[i] = m;
            n++;
            return;
        }
            i++;
    }
    return;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return;
    am_list[idx] = 0;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3)
        return;

    if (am_list[idx] == 0)
        return;

    am_list[idx]->use(target);
}

Character & Character::operator=(const Character &c) {
    int i;

    i = 0;
    n = c.n;
    while(i < 4)
    {
        if(am_list[i] == 0 && c.am_list[i] == 0)
            am_list[i] = 0;
        else if (am_list[i] == 0 && c.am_list[i] != 0)
            am_list[i] = c.am_list[i]->clone();
        else if (am_list[i] != 0 && c.am_list[i] != 0)
        {
            delete am_list[i];
            am_list[i] = c.am_list[i]->clone();
        }
        else if (am_list[i] != 0 && c.am_list[i] == 0)
        {
            delete am_list[i];
            am_list[i] = 0;
        }
    i++;
    }
    name = c.getName();
    return *this;
}

Character::Character(const Character &c) {
    int i;

    i = 0;
    n = c.n;
    while(i < 4)
    {
        if(am_list[i] == 0 && c.am_list[i] == 0)
            am_list[i] = 0;
        else if (am_list[i] == 0 && c.am_list[i] != 0)
            am_list[i] = c.am_list[i]->clone();
        else if (am_list[i] != 0 && c.am_list[i] != 0)
        {
            delete am_list[i];
            am_list[i] = c.am_list[i]->clone();
        }
        else if (am_list[i] != 0 && c.am_list[i] == 0)
        {
            delete am_list[i];
            am_list[i] = 0;
        }
        i++;
    }
    name = c.getName();
}
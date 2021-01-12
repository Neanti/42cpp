#include "Character.hpp"

const std::string & Character::getName() {
    return name;
}

Character::Character() {
    return;
}

Character::~Character() {
    return;
}

Character::Character(std::string name) : name(name){
    int i;

    i = 0;
    while(i < 4)
        am_list[i++] = nullptr;
    n = 0;
    return;
}

void Character::equip(AMateria *m) {
    if(n == 4 || m == nullptr)
        return;
    int i;

    i = 0;
    while (i < 4) {
        if (am_list[i] == nullptr)
            am_list[i] = m;
        i++;
    }
    return;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return;
    am_list[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3)
        return;
    if (am_list[idx] == nullptr)
        return;
    am_list[idx]->use(target);
}

Character::Character(const Character &c) {
    int i;

    i = 0;
    while(i < 4)
    {
        if (c.am_list[i] == nullptr)
            am_list[i] = nullptr;
        else
            am_list[i] = c.am_list[i]->clone();
        i++;
    }
    name = c.name;
    return;
}
#include "Character.hpp"

Character::Character(const std::string &name) : name(name), AP(40), weapon(NULL){
    return;
}

void Character::recoverAP() {
    AP += 10;
    return;
}

void Character::attack(Enemy *e) {
    if (weapon->getAPCost() > AP)
        return;
    std::cout << name << " attacks " << e->getType() << " with a " << weapon->getName() << std::endl;
    AP -= weapon->getAPCost();
    weapon->attack();
    e->takeDamage(weapon->getDamage());
    if (e->getHP() <= 0)
        delete e;
    return;
}

Character::~Character() {
    return;
}

void Character::equip(AWeapon *z) {
    weapon = z;
    return;
}

std::string Character::getName() const {
    return name;
}

int Character::getAP() const {
    return AP;
}

AWeapon *Character::getWeapon() const {
    return weapon;
}

std::ostream & operator<<(std::ostream &output, const Character &c) {
    if (c.getWeapon() != NULL)
        output << c.getName() << " has " << c.getAP() << " and wields a " << c.getWeapon()->getName() << std::endl;
    else
        output << c.getName() << " has " << c.getAP() << " and is unarmed " << std::endl;
    return output;
}
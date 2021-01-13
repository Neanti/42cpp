#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::~SuperTrap() {
    std::cout << "SuperTrap " << name << " is dead !" << std::endl;
    return;
}

SuperTrap::SuperTrap(std::string n) : ClapTrap(n), NinjaTrap(n), FragTrap(n){
    this->hp = 100;
    this->mhp = 100;
    this->ep = 120;
    this->mep = 120;
    this->lvl = 1;
    this->mdmg = 60;
    this->rdmg = 20;
    this->armor = 5;
    std::cout << "SuperTrap " << name << "is born !" << std::endl;
    return;
}

void SuperTrap::rangedAttack(const std::string &target) {
    FragTrap::rangedAttack(target);
    return;
}

void SuperTrap::meleeAttack(const std::string &target) {
    NinjaTrap::meleeAttack(target);
    return;
}

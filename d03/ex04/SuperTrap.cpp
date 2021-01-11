#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::~SuperTrap() {
    std::cout << "SuperTrap " << name << " is dead !" << std::endl;
    return;
}

SuperTrap::SuperTrap(std::string n) : ClapTrap(n), FragTrap(n), NinjaTrap(n){
    this->hp = FragTrap::hp;
    this->mhp = FragTrap::mhp;
    this->ep = NinjaTrap::ep;
    this->mep = NinjaTrap::mep;
    this->lvl = 1;
    this->mdmg = NinjaTrap::mdmg;
    this->rdmg = FragTrap::rdmg;
    this->armor = FragTrap::armor;
    std::cout << "SuperTrap " << this->FragTrap::hp  << " is born !" << std::endl;
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

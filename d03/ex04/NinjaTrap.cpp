#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n){
    hp = 60;
    mhp = 60;
    ep = 120;
    mep = 120;
    lvl = 1;
    mdmg = 60;
    rdmg = 5;
    armor = 0;
    std::cout << "N1NJ4-TR4P " << name << " is born !" << std::endl;
    return;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "N1NJ4-TR4P " << name << " is dead !" << std::endl;
    return;
}

void NinjaTrap::meleeAttack(const std::string &target) {
    std::cout << "N1NJ4-TR4P " << name << " attacks " << target << " for " << mdmg <<  "DMG with a melee attack !" << std::endl;
    return;
}

void NinjaTrap::rangedAttack(const std::string &target) {
    std::cout << "N1NJ4-TR4P " << name << " attacks " << target << " for " << rdmg <<  "DMG with a ranged attack !" << std::endl;
    return;
}

void NinjaTrap::ninjaShoebox(const FragTrap &trap) {
    std::cout << "N1NJ4-TR4P " << name << " hates FR4G-TR4P " << trap.getName() << " !!!" << std::endl;
    return;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &trap) {
    std::cout << "N1NJ4-TR4P " << name << " IS N1NJ4-TR4P " << trap.getName() << " !!!" << std::endl;
    return;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &trap) {
    std::cout << "N1NJ4-TR4P " << name << " loves SC4V-TR4P " << trap.getName() << " !!!" << std::endl;
    return;
}
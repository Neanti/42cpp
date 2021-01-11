#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n){
    hp = 100;
    mhp = 100;
    ep = 50;
    mep = 50;
    lvl = 1;
    mdmg = 20;
    rdmg = 15;
    armor = 3;
    std::cout << "SC4V-TR4P " << name << " is born !" << std::endl;
    return;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TR4P " << name << " is dead !" << std::endl;
    return;
}

void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "SC4V-TR4P " << name << " attacks " << target << " for " << mdmg <<  "DMG with a melee attack !" << std::endl;
    return;
}

void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "SC4V-TR4P " << name << " attacks " << target << " for " << rdmg <<  "DMG with a ranged attack !" << std::endl;
    return;
}

void ScavTrap::challengeNewcomer(const std::string &target) {
    int r,i;
    std::string chall;
    std::ifstream choose("challenge");

    if (ep < 25)
    {
        std::cout << "SC4V-TR4P " << name << " has only " << ep << "EP, he can not use his special attack !" << std::endl;
        return;
    }
    ep -= 25;
    i = 0;
    r = rand() % 5;
    while(i <= r) {
        getline(choose, chall);
        i++;
    }
    std::cout << "SC4V-TR4P " << name << " challenge " << target << " on "<< chall << " !" << std::endl;
    choose.close();
}
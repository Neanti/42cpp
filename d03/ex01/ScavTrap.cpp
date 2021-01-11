#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n){
    this->name = n;
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

void ScavTrap::takeDamage(unsigned int amount) {
    if(amount > ((unsigned int) hp + armor))
    {
        std::cout << name << " take nearly deadly attack of " << amount - armor <<  "HP instead of " << amount << "HP thanks to his armor !" << std::endl;
        hp = 0;
    }
    else {
        std::cout << name << " take " << amount - armor << "HP instead of " << amount
                  << "HP thanks to his armor !" << std::endl;
        hp = hp + armor - amount;
    }
    return;
}

void ScavTrap::beRepaired(unsigned int amount) {

    if ( amount > (unsigned int) (mhp - hp))
    {
        std::cout << name << " is healed for " <<
                  mhp - hp <<  "HP instead of " << amount << "HP to full HP !" << std::endl;
        hp = mhp;
    }
    else
    {
        std::cout << name << " is healed for " <<
                  amount <<  "HP" << " to " << amount + hp <<"HP !" << std::endl;
        hp +=amount;
    }
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
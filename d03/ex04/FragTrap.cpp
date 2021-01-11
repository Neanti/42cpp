#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n){
    hp = 100;
    mhp = 100;
    ep = 100;
    mep = 100;
    lvl = 1;
    mdmg = 30;
    rdmg = 20;
    armor = 5;
    std::cout << "FR4G-TP " << hp << " is born !" << std::endl;
    return;
}

FragTrap::~FragTrap() {
    std::cout << "FR4G-TP " << name << " is dead !" << std::endl;
    return;
}

void FragTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << name << " attacks " << target << " for " << mdmg <<  "DMG with a melee attack !" << std::endl;
    return;
}

void FragTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << name << " attacks " << target << " for " << rdmg <<  "DMG with a ranged attack !" << std::endl;
    return;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    int r,i;
    std::string atk;
    std::ifstream choose("specialAttacks.atk");
    if (ep < 25)
    {
        std::cout << "FR4G-TP " << name << " has only " << ep << "EP, he can not use his special attack !" << std::endl;
        return;
    }
    ep -= 25;
    i = 0;
    r = rand() % 5;
    while(i <= r) {
        getline(choose, atk);
        i++;
    }
        std::cout << "FR4G-TP " << name << " attacks " << target << " for 1000DMG with "<< atk << " !" << std::endl;
    choose.close();
}
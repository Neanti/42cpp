#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Cl4pTr4p " << "is born !" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : name(n){
    std::cout << "Cl4pTr4p " << name << " is born !" << std::endl;
    return;
}

ClapTrap::~ClapTrap() {
    std::cout << "Cl4pTr4p " << name << " is dead !" << std::endl;
    return;
}

void ClapTrap::takeDamage(unsigned int amount) {
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

void ClapTrap::beRepaired(unsigned int amount) {

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


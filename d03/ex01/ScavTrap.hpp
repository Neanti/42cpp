#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <fstream>
#include <random>

class ScavTrap{
private:
    int hp;
    int mhp;
    int ep;
    int mep;
    int lvl;
    std::string name;
    int mdmg;
    int rdmg;
    int armor;
public:
    ScavTrap(std::string n);
    ~ScavTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void challengeNewcomer(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <random>
#include <fstream>

class ClapTrap{
protected:
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
    ClapTrap(std::string n);
    ClapTrap();
    ~ClapTrap();
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
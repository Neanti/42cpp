#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <random>
#include <fstream>

class FragTrap{
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
    FragTrap(std::string n);
    ~FragTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void vaulthunter_dot_exe(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif
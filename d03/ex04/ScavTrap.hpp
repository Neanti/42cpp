#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <fstream>
#include <random>

class ScavTrap : public ClapTrap{
public:
    ScavTrap(std::string n);
    ~ScavTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void challengeNewcomer(std::string const & target);
};


#endif
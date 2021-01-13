#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include <iostream>
#include <random>
#include <fstream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public NinjaTrap, virtual public FragTrap {
public:
    SuperTrap(std::string n);
    ~SuperTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
};

#endif
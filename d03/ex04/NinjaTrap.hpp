#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <fstream>
#include <random>

class NinjaTrap : virtual public ClapTrap{
public:
    NinjaTrap(std::string n);
    ~NinjaTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void ninjaShoebox(NinjaTrap const &trap);
    void ninjaShoebox(ScavTrap const &trap);
    void ninjaShoebox(FragTrap const &trap);

};


#endif
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <random>
#include <fstream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap(std::string n);
    ~FragTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void vaulthunter_dot_exe(std::string const & target);
};

#endif
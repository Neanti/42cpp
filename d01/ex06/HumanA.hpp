#ifndef HUMANA_HPP
#define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
private:
    Weapon &w;
    std::string name;
public:
    ~HumanA();
    void attack();
    HumanA(std::string n, Weapon &weapon);
};

#endif
#ifndef HUMANB_HPP
#define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
private:
    Weapon *w;
    std::string name;
public:
    HumanB();
    ~HumanB();
    void attack();
    HumanB(std::string n);
    void setWeapon(Weapon &weapon);

};

#endif
#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon{
public:
    Weapon();
    Weapon(std::string t);
    ~Weapon();
    void setType(std::string t);
    const std::string &getType(void);
private:
    std::string type;
};

#endif
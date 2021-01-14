#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon{
private:
    std::string name;
    int damage;
    int apcost;
    AWeapon();
    AWeapon(const AWeapon &w);
    AWeapon &operator=(const AWeapon &w);
public:
    AWeapon(std::string const & name, int apcost, int damage);
    ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif
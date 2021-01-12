#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

class Character {
private:
    std::string name;
    int AP;
    AWeapon *weapon;
    Character &operator=(const Character &c);
    Character(const Character &c);
    Character();
public:
    Character(std::string const & name);
    ~Character();
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string getName() const;
    int getAP(void) const;
    AWeapon *getWeapon(void) const;

};

std::ostream &operator<<(std::ostream &output, const Character &c);

#endif
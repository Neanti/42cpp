#ifndef CHAR_HPP
#define CHAR_HPP
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include <iostream>

class AMateria;
class ICharacter;

class Character : public ICharacter {
public:
    ~Character();
    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
    Character(std::string name);
    Character &operator=(const Character &c);
    Character(const Character &c);
private:
    Character();
    std::string name;
    AMateria *am_list[4];
    int n;
};

#endif
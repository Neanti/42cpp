#ifndef CHAR
#define CHAR
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
public:
    ~Character();
    virtual std::string const &getName();
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
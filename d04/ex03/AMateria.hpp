#ifnedf AMATERIA
#define AMATERIA
#include <iostream>

class AMateria {
private:
    std::string type;
    unsigned int _xp;
    AMateria &operator=(const AMateria &am);
    AMateria(const AMateria &am);
public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    std::string const &getType() const;
    unsigned int getXP() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif


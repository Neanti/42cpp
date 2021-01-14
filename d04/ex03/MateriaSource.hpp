#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
//#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>
class AMateria;

class MateriaSource : public IMateriaSource{
private:
    AMateria *list[4];
    int n;
public:
    ~MateriaSource();
    virtual void learnMateria(AMateria *);
    virtual AMateria *createMateria(std::string const &type);
    MateriaSource();
    MateriaSource &operator=(const MateriaSource &source);
    MateriaSource(const MateriaSource &s);
};

#endif
#ifndef MATERIA
#define MATERIA
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    ~MateriaSource();
    virtual void learnMateria(AMateria *);
    virtual AMateria *createMateria(std::string const &type);
    MateriaSource();
    MateriaSource &operator=(const MateriaSource &source);
};

#endif
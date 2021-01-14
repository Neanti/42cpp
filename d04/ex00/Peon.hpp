#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim{
public:
    Peon(std::string n);
    virtual ~Peon();
    virtual void getPolymorphed() const;
private:
    Peon();
    Peon(Peon &p);
    Peon &operator=(Peon &p);
};


#endif
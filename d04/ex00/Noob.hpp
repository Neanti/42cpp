#ifndef NOOB_HPP
#define NOOB_HPP
#include "Victim.hpp"
#include "Peon.hpp"
class Noob : public Peon{
public:
    Noob(std::string n);
    ~Noob();
    virtual void getPolymorphed() const;
private:
    Noob();
    Noob(Noob &p);
    Noob &operator=(Noob &p);
};


#endif
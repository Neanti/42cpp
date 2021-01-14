#ifndef C_HPP
#define C_HPP
#include "Base.hpp"
#include <iostream>

class C : public Base {
private:
    C &operator=(C const &a);
    C(C const &a);

public:
    virtual ~C();
    C();
};

#endif
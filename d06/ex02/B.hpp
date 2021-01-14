#ifndef B_HPP
#define B_HPP
#include "Base.hpp"
#include <iostream>

class B : public Base {
private:
    B &operator=(B const &a);
    B(B const &a);

public:
    virtual ~B();
    B();
};

#endif
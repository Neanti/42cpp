#ifndef A_HPP
#define A_HPP
#include "Base.hpp"
#include <iostream>

class A : public Base {
private:
    A &operator=(A const &a);
    A(A const &a);

public:
    virtual ~A();
    A();
};

#endif
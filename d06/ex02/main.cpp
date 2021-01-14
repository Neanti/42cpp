#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <random>
#include <exception>

Base *generate(void)
{
    int i;

    i = rand() % 3;
    if (i == 0)
        return new A();
    else if (i == 1)
        return new B();
    else
        return new C();

}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;

}

void identify_from_reference(Base &p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast) {
    }
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast) {
    }
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast) {
    }

    return;
}

int main()
{
    srand(time(NULL));
    Base *b = generate();
    identify_from_pointer(b);
    Base &bb = *b;
    identify_from_reference(bb);
    return 0;
}
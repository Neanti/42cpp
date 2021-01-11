#include <iostream>
#include "Fixed.hpp"
#include <iomanip>

int main(void)
{
//    float f = 56.4320001f;
//    std::cout << std::setprecision(9) << f << std::endl;
//   Fixed b(f);
//
//        std::cout << "f=         " << f << std::endl << "toFloat()= " << b.toFloat()
//        << std::endl << "toint()=   " << b.toInt() << std::endl;
//        std::cout <<std::endl << b << std::endl;
    Fixed  a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}

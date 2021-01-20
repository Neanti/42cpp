#include "whatever.hpp"
#include <iostream>
//#include "Awesome.hpp"

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

//    int getn(void) { return _n;}
//
//
//    Awesome aw(2);
//    Awesome bw(3);
//
//    ::swap( aw, bw );
//    std::cout << "aw = " << aw.getn() << ", bw = " << bw.getn() << std::endl;
//    std::cout << "min( aw, bw ) = " << (::min( aw, bw )).getn() << std::endl;
//    std::cout << "mawx( aw, bw ) = " << (::max( aw, bw )).getn() << std::endl;

    return 0;
}

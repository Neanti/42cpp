#include <iostream>
#include <sstream>//strtod stream
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cout << "Wrong use !" << std::endl;
        return 0;
    }
    double d = strtod(av[1], nullptr);
    std::cout << "result = " << d << std::endl;


    return 0;
}

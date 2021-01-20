#include "Array.hpp"

int main()
{
    Array<int> *a = new Array<int>(10);
    Array<int> b;
    b = *a;
    std::cout << b.size() << std::endl;
    int i = 0;
    while(i < 10)
    {
        b[i] = i;
        (*a)[5] = 42;
        std::cout << b[i] << std::endl;
        i++;
    }
    std::cout << "Nope" << b[10] << std::endl;
    return 0;
}
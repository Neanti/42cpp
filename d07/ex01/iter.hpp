#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *a, int len, void (*f)(T const &b))
{
    int i;

    i = 0;
    while(i < len)
    {
        (*f)(a[i]);
        i++;
    }
    return;
}

template <typename T>
void disp(T d)
{
    std::cout << d << std::endl;
}

#endif

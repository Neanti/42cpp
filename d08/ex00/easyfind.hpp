#ifndef EASY_HPP
#define EASY_HPP
#include <algorithm>
#include <iostream>

template<typename T>
int easyfind(T c, int i)
{
    int j = 0;
   typename T::const_iterator it = c.begin();
   typename T::const_iterator ite = c.end();

    while(it != ite)
    {
        if (*it == i)
            return j;
        j++;
        it++;
    }
    return -1;
}

#endif
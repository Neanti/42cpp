#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <list>
int main()
{
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(6);
    lst.push_back(7);

    std::cout << "list = 5,6,7" << std::endl;
    int i = easyfind(lst, 8);
    std::cout << "looking for 8" << std::endl;
    if ((i < 0))
        std::cout << "Not Found !" << std::endl;
    else
        std::cout << "Found at : " << i << " !" << std::endl;
    std::cout << "looking for 6" << std::endl;
    i = easyfind(lst, 6);
    if (i < 0)
        std::cout << "Not Found !" << std::endl;
            else
        std::cout << "Found at : " << i << " !" << std::endl;

    return 0;
}
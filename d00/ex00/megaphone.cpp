#include <iostream>

int main(int ac, char **av)
{
    int i;
    size_t j;

    i = 1;
    j = 0;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        while (i < ac) {
            std::string str(av[i]);
            while (j < str.length()) {
                std::cout << (char) std::toupper(str.at(j));
                j++;
            }
            j = 0;
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
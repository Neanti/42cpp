#include "Contact.hpp"


int main()
{
    Contact list[8];
    int i;
    int j;
    std::string cmd;

    i = 0;
    j = 0;
    std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
    std::getline(std::cin, cmd);
    while (cmd.compare("EXIT"))
    {
        if (!cmd.compare("ADD"))
        {
            if (i == 8)
                std::cout << "You already got 8 Contact !" << std::endl;
            else {
                list[i].fill_info();
                i++;
                std::cout << "Contact added !" << std::endl;
            }
        }
        else if (!cmd.compare("SEARCH"))
        {
            std::cout << "Contact List :" << std::endl;
            while (j < i)
            {
                std::cout << "         " << j + 1 << "|";
                list[j].list_display();
                j++;
            }
            j = 0;
            std::cout << "Enter an existing index, anything else will leave SEARCH mode !" << std::endl;
            std::getline(std::cin, cmd);
            if (cmd.length() == 1 && cmd.at(0) >= 49 && cmd.at(0) <= 48 + i)
            {
                std::cout << "Here is Contact " << cmd << " :" << std::endl;
                list[std::stoi(cmd) - 1].long_display();
            }
            else
            {
                std::cout << "Wrong Index, Leaving SEARCH mode !" << std::endl;
            }
        }
        std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, cmd);
    }
    std::cout << "Good Bye !" << std::endl;
    return (0);
}
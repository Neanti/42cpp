#include <iostream>

int main(){
    std::string s;
    s = "HI THIS IS BRAIN";
    std::string *pointeur = &s;
    std::cout << "Pointeur : " << *pointeur << std::endl;
    std::string &reference = s;
    std::cout << "Reference : " << reference << std::endl;
    return (0);
}
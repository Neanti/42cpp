#include "Contact.hpp"

void format(std::string s)
{
    size_t i;

    i = 0;
    if (s.length() <= 10) {
        while (i++ + s.length() < 10)
            std::cout << " ";
        std::cout << s;
    }
    else
        std::cout << s.substr(0, 9) << ".";
    return;
}

Contact::Contact() {
    return;
}
Contact::~Contact() {
    return;
}

void Contact::fill_info() {
    std::cout << "First name ?" << std::endl;
    std::getline(std::cin, this->fn);
    std::cout << "Last name ?" << std::endl;
    std::getline(std::cin, this->ln);
    std::cout << "Nickname ?" << std::endl;
    std::getline(std::cin, this->nn);
    std::cout << "Login ?" << std::endl;
    std::getline(std::cin, this->login);
    std::cout << "Postal address ?" << std::endl;
    std::getline(std::cin, this->p_address);
    std::cout << "Email address ?" << std::endl;
    std::getline(std::cin, this->e_address);
    std::cout << "Phone Number ?" << std::endl;
    std::getline(std::cin, this->phone);
    std::cout << "Birthday Date ?" << std::endl;
    std::getline(std::cin, this->birth);
    std::cout << "Favorite meal ?" << std::endl;
    std::getline(std::cin, this->meal);
    std::cout << "Underwear Color ?" << std::endl;
    std::getline(std::cin, this->color);
    std::cout << "Darkest Secret ?" << std::endl;
    std::getline(std::cin, this->secret);

}
void Contact::list_display() {
    format(this->fn);
    std::cout << "|";
    format(this->ln);
    std::cout << "|";
    format(this->nn);
    std::cout << std::endl;
    return;
}

void Contact::long_display() {
    std::cout << "First Name: " << this->fn << std::endl;
    std::cout << "Last Name: " << this->ln << std::endl;
    std::cout << "Nickname: " << this->nn << std::endl;
    std::cout << "Login: " << this->login << std::endl;
    std::cout << "Postal Address: " << this->p_address << std::endl;
    std::cout << "Email Address: " << this->e_address << std::endl;
    std::cout << "Phone Number: " << this->phone << std::endl;
    std::cout << "Birthday Date: " << this->birth << std::endl;
    std::cout << "Favourite Meal: " << this->meal << std::endl;
    std::cout << "Underwear Color: " << this->color << std::endl;
    std::cout << "Darkest Secret: " << this->secret << std::endl;
    return;
}
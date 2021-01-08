#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
public:
    Contact();
    ~Contact();
    void list_display(void);
    void long_display(void);
    void fill_info(void);

private:
    std::string fn;
    std::string ln;
    std::string nn;
    std::string login;
    std::string p_address;
    std::string e_address;
    std::string phone;
    std::string birth;
    std::string meal;
    std::string color;
    std::string secret;
};
#endif
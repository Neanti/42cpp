#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <random>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    srand(time(NULL));
    try {
        Bureaucrat b("Bobby", 150);
        ShrubberyCreationForm f("Booo");
        f.execute(b);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Bureaucrat b("Bobby", 1);
        PresidentialPardonForm f("Booo");
        f.execute(b);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Bureaucrat b("Bobby", 12);
        PresidentialPardonForm f("Booo");
        f.execute(b);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Bureaucrat b("Bobby", 1);
        PresidentialPardonForm f("BoooPP");
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Bureaucrat b("Bobby", 150);
        PresidentialPardonForm f("BoooPP");
        b.signForm(f);
        b.executeForm(f);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    return 0;
}
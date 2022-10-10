#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

void line()
{
    std::cout << "=================================" << std::endl;
}

int main(void)
{
    ShrubberyCreationForm test1("test1");
    RobotomyRequestForm test2("test2");
    PresidentialPardonForm test3("test3");

    Bureaucrat bureaucrat1("hello", 130);

    line();
    try {
        bureaucrat1.executeForm(test1);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat1.executeForm(test2);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat1.executeForm(test3);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    line();

    Bureaucrat bureaucrat2("hello2", 42);

    line();
    try {
        bureaucrat2.executeForm(test1);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat2.executeForm(test2);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat2.executeForm(test3);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    line();

    Bureaucrat bureaucrat3("hello2", 1);

    line();
    try {
        bureaucrat3.executeForm(test1);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat3.executeForm(test2);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat3.executeForm(test3);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    line();
    return (0);
}
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

void line()
{
    std::cout << "=================================" << std::endl;
}

int main(void)
{
    Intern intern;
    Form* test1;
    Form* test2;
    Form* test3;
    try {
        test1 = intern.makeForm("presidential request", "test1");
        test2 = intern.makeForm("rebotomy request", "test2");
        test3 = intern.makeForm("shrubbery request", "test3");
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat bureaucrat1("hello", 130);

    line();
    try {
        bureaucrat1.executeForm(*test1);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat1.executeForm(*test2);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat1.executeForm(*test3);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    line();

    Bureaucrat bureaucrat2("hello2", 42);

    line();
    try {
        bureaucrat2.executeForm(*test1);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat2.executeForm(*test2);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat2.executeForm(*test3);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    line();

    Bureaucrat bureaucrat3("hello2", 1);

    line();
    try {
        bureaucrat3.executeForm(*test1);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat3.executeForm(*test2);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    try {
        bureaucrat3.executeForm(*test3);
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }
    line();
    return (0);
}
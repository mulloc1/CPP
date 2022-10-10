#include "Intern.hpp" 

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Form* Intern::makeForm(const std::string& request, const std::string& target)
{
    int num = 0;
    Form *form;

    num |= (!request.compare("rebotomy request"));
    num |= (!request.compare("shrubbery request")) << 1;
    num |= (!request.compare("presidential request")) << 2;

    switch (num)
    {
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new ShrubberyCreationForm(target);
            break;
        case 4:
            form = new PresidentialPardonForm(target);
            break;
        default :
            throw Intern::NotExistClass();
    }
    return (form);
}

const char* Intern::NotExistClass::what() const throw()
{
    return "NotExistClass";
}
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern 
{
private:
    Intern(const Intern& intern);
    Intern& operator = (const Intern& intern);

public:
    Intern();
    ~Intern();

    Form* makeForm(const std::string& request, const std::string& target);

    class NotExistClass : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
};

#endif
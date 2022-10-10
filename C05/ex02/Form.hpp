#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include <random>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
    const std::string   _name;
    bool                _signed;
    const int           _signGrade;
    const int           _executeGrade;
    Form();
public:
    Form(const std::string& name, const int& signGrade, const int& _executeGrade);
    Form(const Form& dummy);
    virtual ~Form();
    Form& operator = (const Form& dummy);

    const std::string& getName() const;
    const bool& getSigned() const;
    const int& getSignGrade() const;
    const int& getExecuteGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);
    virtual bool execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator << (std::ostream& out, const Form& dummy);

#endif
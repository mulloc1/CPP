#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _signGrade;
    Form();
public:
    Form(const std::string& name, const int& signGrade);
    Form(const Form& dummy);
    ~Form();
    Form& operator = (const Form& dummy);

    const std::string& getName() const;
    const bool& getSigned() const;
    const int& getSignGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator << (std::ostream& out, const Form& dummy);

// std::ostream& operator << (std::ostream& out, Form& dummy);

#endif
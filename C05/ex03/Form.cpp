#include "Form.hpp"

Form::Form(const std::string& name, const int& signGrade, const int& executeGrade)
: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (this->_signGrade > 150)
        throw Form::GradeTooLowException();
    else if (this->_signGrade < 1)
        throw Form::GradeTooHighException();
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form& dummy)
: _name(dummy.getName()), _signGrade(dummy.getSignGrade()), _executeGrade(dummy.getExecuteGrade())
{
    *this = dummy;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator = (const Form& dummy)
{
    this->_signed = dummy._signed;
    return (*this);
}

const std::string& Form::getName() const
{
    return (this->_name);
}

const bool& Form::getSigned() const
{
    return (this->_signed);
}

const int& Form::getSignGrade() const
{
    return (this->_signGrade);
}

const int& Form::getExecuteGrade() const
{
    return (this->_executeGrade);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    int grade = bureaucrat.getGrade();
    if (grade > this->_signGrade)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}

std::ostream& operator << (std::ostream& out, const Form& dummy)
{
    out << dummy.getName() << std::endl;
    return (out);
}
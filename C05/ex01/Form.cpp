#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, const int& signGrade, const int& executeGrade)
: _name(name), _signAble(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (this->_signGrade > 150 || this->_executeGrade > 150))
        throw Form::GradeTooLowException();
    else if (this->_signGrade < 1 || this->_executeGrade < 1)
        throw Form::GradeTooHighException();
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form& dummy)
{
    *this = dummy;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator = (const Form& dummy)
{
    this->_signAble = dummy._signAble;
    return (*this);
}

const std::string& Form::getName()
{
    return (this->_name);
}

const bool& Form::getSignAble()
{
    return (this->_signAble);
}

const unsigned int& Form::getSignGrade()
{
    return (this->_signGrade);
}

const unsigned int& Form::getExecuteGrade()
{
    return (this->_executeGrade);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    int grade = bureaucrat.getGrade();
    if (grade > this->signGrade)
        throw Form::GradeTooLowException();
    else
        this->signAble = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}

std::ostream& operator << (std::ostream& out, const Form::Form& dummy)
{
    out << dummy.getName() << std::endl;
    return (out);
}
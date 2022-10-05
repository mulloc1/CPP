#include "Form.hpp"

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
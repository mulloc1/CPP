#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, const int& grade)
: _name(name), _grade(grade)
{
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade < 1)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat grade constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& dummy)
{
    *this = dummy;
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureacrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& dummy)
{
    this->_grade = dummy._grade;
    return (*this);
}

std::string const& Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade()
{
    return (this->_grade);
}

void Bureaucrat::increment(int grade)
{
    if (this->_grade - grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= grade - 1;
}

void Bureaucrat::decrement(int grade)
{
    if (this->_grade + grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += grade;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

std::ostream& operator << (std::ostream& out, Bureaucrat& dummy)
{
    out << dummy.getName() << ", bureaucrat grade " << dummy.getGrade();
    return (out);
}
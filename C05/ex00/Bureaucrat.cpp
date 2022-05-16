#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: _name("jaebae"), _grade(150)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade)
: _name("jaebae"), _grade(grade)
{
    Bureaucrat::GradeTooHighException h_excep;
    Bureaucrat::GradeTooLowException l_excep;

    std::cout << "Bureaucrat grade constructor called" << std::endl;
    if (this->_grade > 150)
        throw h_excep;
    else if (this->_grade < 1)
        throw l_excep;
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

std::string Bureaucrat::getName()
{
    return (this->_name);
}

int Bureaucrat::getGrade()
{
    return (this->_grade);
}

void Bureaucrat::increment(int grade)
{
    Bureaucrat::GradeTooHighException excep;

    if (this->_grade - grade - 1 < 1)
        throw excep;
    this->_grade -= grade - 1;
}

void Bureaucrat::decrement(int grade)
{
    Bureaucrat::GradeTooLowException excep;

    if (this->_grade + grade > 150)
        throw excep;
    this->_grade += grade;
}
const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return ("GradeTooLowException");
}

std::ostream& operator << (std::ostream& out, Bureaucrat& dummy)
{
    out << dummy.getName() << ", bureaucrat grade " << dummy.getGrade();
    return (out);
}
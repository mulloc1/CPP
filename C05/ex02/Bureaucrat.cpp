#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, const int& grade)
: _name(name), _grade(grade)
{
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
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

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::increment(const int& grade)
{
    if (this->_grade - grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= grade;
}

void Bureaucrat::decrement(const int& grade)
{
    if (this->_grade + grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += grade;
}

void Bureaucrat::signForm(bool sign, const std::string &formName, const int& executeGrade)
{
    if (sign && this->_grade <= executeGrade) // 실행 권한도 추가해야함.
        std::cout << this->getName() << " signed " << formName << std::endl;
    else if (!sign)
        std::cout << this->getName() << " couldn't sign " << formName << " because unsigned" << std::endl;
    else
        std::cout << this->getName() << " couldn't sign " << formName << " because too small executeGrade" << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& dummy)
{
    out << dummy.getName() << ", bureaucrat grade " << dummy.getGrade();
    return (out);
}
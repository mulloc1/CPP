#include "Form.hpp"


    // const std::string   _name; 이름
    // bool                _signAble; 사인을 할 수 있는지
    // const unsigned int  _signGrade; 사인 등급
    // const unsigned int  _executeGrade; 사인 하는데 필요한 등급

Form::Form()
: _name("jaebae"), _signAble(0), _signGrade(150), _executeGrade(1)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string& name, const unsigned int& signGrade, const unsigned int& executeGrade)
: _name(name), _signAble(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (this->_signGrade <= this->_executeGrade)
        this->_signAble = true;
    std::cout << "Form 3 parameter constructor called" << std::endl;
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
    this->_name = dummy._name;
    this->_signAble = dummy._signAble;
    this->_signGrade = dummy._signGrade;
    this->_executeGrade = dummy._executeGrade;
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

void Form::setName(const std::string& name)
{
    this->_name = dummy._name;
}

void Form::setSignAble(const bool& signAble)
{
    this->_signAble = signAble;
}

void Form::setSignGrade(const unsigned int& signGrade)
{
    this->_signGrade = dummy._signGrade;
}

void Form::setExecuteGrade(const unsigned int& executeGrade)
{
    this->_executeGrade = dummy._executeGrade;
}

void Form::beSined();

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
    out << dummy.getName() << " " << dummy.getSignAble() << " " << dummy.getSignGrade() << " " << dummy.getExecuteGrade() << std::endl;
    return (out);
}
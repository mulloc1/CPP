#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
: _type(type)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& dummy)
{
    *this = dummy;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& dummy)
{
    this->_type = dummy._type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << this->getType() << " says WrongAnimal-WrongAnimal" << std::endl;
}

void WrongAnimal::setType(const std::string& type)
{
    this->_type = type;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}
#include "Animal.hpp"

Animal::Animal()
: _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type)
: _type(type)
{
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal& dummy)
{
    *this = dummy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator = (const Animal& dummy)
{
    this->_type = dummy._type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << this->getType() << " says Animal-Animal" << std::endl;
}

void Animal::setType(const std::string& type)
{
    this->_type = type;
}

std::string Animal::getType() const
{
    return (this->_type);
}
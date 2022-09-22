#include "WrongCat.hpp"

WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& dummy)
{
    *this = dummy;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& dummy)
{
    this->_type = dummy._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << this->getType() << " says mew-mew" << std::endl;
}
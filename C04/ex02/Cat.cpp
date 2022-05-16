#include "Cat.hpp"

Cat::Cat()
: Animal("Cat")
{
    this->_brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& dummy)
{ *this = dummy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator = (const Cat& dummy)
{
    this->_type = dummy._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->getType() << " says mew-mew" << std::endl;
}

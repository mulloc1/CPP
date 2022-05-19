#include "Cure.hpp"

Cure::Cure(std::string const & type)
: AMateria(type)
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new AMateria(this->_type));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}
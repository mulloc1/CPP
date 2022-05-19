#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
: _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

void AMateria::use(ICharacter& target)
{}
#include "ICE.hpp"

Ice::Ice()
: AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(std::string const & type)
: AMateria(type)
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new AMateria(this->_type));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}
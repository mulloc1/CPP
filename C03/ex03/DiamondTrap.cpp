#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
: ClapTrap("haha_clap_name")
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap " << this->_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
: ClapTrap(name + "_clap_name")
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap " << this->_name << " name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dummy)
{
    *this = dummy;
    std::cout << "DiamondTrap " << this->_name << " Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& dummy)
{
    this->_name = dummy._name;
    this->_hitPoints = dummy._hitPoints;
    this->_energyPoints = dummy._energyPoints;
    this->_attackDamage = dummy._attackDamage;
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << this->_name << std::endl;
}

std::ostream& operator << (std::ostream& out, const DiamondTrap& dummy)
{
    out << dummy.getName();
    return (out);
}
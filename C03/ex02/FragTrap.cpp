#include "FragTrap.hpp"

FragTrap::FragTrap()
: ClapTrap("haha")
{
    ClapTrap::_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
: ClapTrap(name)
{
    ClapTrap::_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& dummy)
{
    *this = dummy;
    std::cout << "FragTrap " << this->_name << " Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& dummy)
{
    this->_name = dummy._name;
    ClapTrap::_hitPoints = dummy._hitPoints;
    this->_energyPoints = dummy._energyPoints;
    this->_attackDamage = dummy._attackDamage;
    return (*this);
}

std::ostream& operator << (std::ostream& out, const FragTrap& dummy)
{
    out << dummy.getName();
    return (out);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " highFivesGuys~~" << std::endl;
}
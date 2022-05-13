#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
: ClapTrap("default")
{
    ClapTrap::_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
    ClapTrap::_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& dummy)
{
    *this = dummy;
    std::cout << "ScavTrap " << this->_name << " Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& dummy)
{
    this->_name = dummy._name;
    ClapTrap::_hitPoints = dummy._hitPoints;
    this->_energyPoints = dummy._energyPoints;
    this->_attackDamage = dummy._attackDamage;
    return (*this);
}

std::ostream& operator << (std::ostream& out, const ScavTrap& dummy)
{
    out << dummy.getName();
    return (out);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " Gate keeper mode on" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (ClapTrap::_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " groggying" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << \
    " attacks " << target << ", causing " << \
    this->_attackDamage << " points of damage!" << std::endl;
    if (UINT_MAX - this->_energyPoints == UINT_MAX)
        this->_energyPoints = 0;
    else
        this->_energyPoints--;
}
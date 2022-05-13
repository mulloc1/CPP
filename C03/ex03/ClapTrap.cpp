#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("haha"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& dummy)
{
    *this = dummy;
    std::cout << "ClapTrap " << this->_name << " Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (ClapTrap& dummy)
{
    this->_name = dummy._name;
    this->_hitPoints = dummy._hitPoints;
    this->_energyPoints = dummy._energyPoints;
    this->_attackDamage = dummy._attackDamage;
    return (*this);
}

std::ostream& operator << (std::ostream& out, const ClapTrap& dummy)
{
    out << dummy.getName();
    return (out);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " groggying" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << \
    " attacks " << target << ", causing " << \
    this->_attackDamage << " points of damage!" << std::endl;
    if (UINT_MAX - this->_energyPoints == UINT_MAX)
        this->_energyPoints = 0;
    else
        this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " groggying" << std::endl;
        return;
    }
    if (UINT_MAX - this->_hitPoints < amount)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << \
    " takeDemage " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0 || this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " groggying" << std::endl;
        return;
    }
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " beRepaired " << amount << std::endl;
}

void ClapTrap::status()
{
    std::cout << "name : " << this->_name << std::endl;
    std::cout << "hitPoints : " << this->_hitPoints << std::endl;
    std::cout << "energyPoints : " << this->_energyPoints << std::endl;
    std::cout << "attackDamage : " << this->_attackDamage << std::endl;
}

void ClapTrap::setName(const std::string& name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(const unsigned int& hitPoints)
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(const unsigned int& energyPoints)
{
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(const unsigned int& attackDamage)
{
    this->_attackDamage = attackDamage;
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

unsigned int ClapTrap::getHitPoints() const
{
    return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
    return (this->_attackDamage);
}
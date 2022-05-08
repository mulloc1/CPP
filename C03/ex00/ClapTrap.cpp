#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
  : name("default"), hitPoints(10), energyPoints(10), attackPoints(0)
{ std::cout << this->name << " ClapTrap constructor called" << std::endl; }

ClapTrap::ClapTrap(std::string name)
  : name(name), hitPoints(10), energyPoints(10), attackPoints(0)
{ std::cout << this->name << " ClapTrap constructor called" << std::endl; }

ClapTrap::ClapTrap(ClapTrap &claptrap) 
{ *this = claptrap; }

ClapTrap::~ClapTrap()
{ std::cout << this->name << " ClapTrap destructor called" << std::endl; }

ClapTrap& ClapTrap::operator = (ClapTrap &claptrap)
{
  this->hitPoints = claptrap.getHitPoints(); 
  this->energyPoints = claptrap.getEnergyPoints();
  this->attackPoints = claptrap.getAttackPoints();
  return (*this);
}

void  ClapTrap::attack(const std::string& target)
{
  if (this->hitPoints == 0 || this->energyPoints == 0)
  {
    std::cout << this->name << " hitPoints or energyPoints is 0" << std::endl;
    return ;
  }
  this->energyPoints--;
  std::cout << "==> " << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackPoints << " points of damage!" << std::endl;
  std::cout << "energyPoints : " << this->energyPoints << std::endl;
}

void  ClapTrap::takeDemage(unsigned int amount)
{
  unsigned int  temp;

  temp = this->hitPoints;
  this->hitPoints -= amount;
  if (temp < this->hitPoints)
    this->hitPoints = 0;
  std::cout << "==> " << this->name << " is takeDemage " << amount << std::endl;
  std::cout << "hitPoints : " << this->hitPoints << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (this->hitPoints == 0 || this->energyPoints == 0)
  {
    std::cout << this->name << " hitPoints or energyPoints is 0" << std::endl;
    return ;
  }
  this->energyPoints--;
  this->hitPoints += amount;
  std::cout << "==> " << this->name << " is beRepaired " << amount << std::endl; 
  std::cout << "hitPoints : " << this->hitPoints << std::endl;
  std::cout << "energyPoints : " << this->energyPoints << std::endl;
}

void  ClapTrap::setName(std::string& name)
{ this->name = name; }

std::string ClapTrap::getName()
{ return (this->name); }

void  ClapTrap::setHitPoints(unsigned int hitPoints)
{ this->hitPoints = hitPoints; }

unsigned int ClapTrap::getHitPoints()
{ return (this->hitPoints); }

void  ClapTrap::setEnergyPoints(unsigned int energyPoints)
{ this->energyPoints = energyPoints; }

unsigned int ClapTrap::getEnergyPoints()
{ return (this->energyPoints); }

void  ClapTrap::setAttackPoints(unsigned int attackPoints)
{ this->attackPoints = attackPoints; }

unsigned int ClapTrap::getAttackPoints()
{ return (this->attackPoints); }

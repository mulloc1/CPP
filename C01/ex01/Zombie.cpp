#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, int number)
{
  this->_name = name;
  this->_number = number;
}

Zombie::~Zombie()
{
  std::cout << this->_number << " " << this->_name << " is died" << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->_number << " " << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName(std::string name)
{
  this->_name = name;
}

std::string Zombie::getName()
{
  return (this->_name);
}

void  Zombie::setNumber(int number)
{
  this->_number = number;
}

int Zombie::getNumber()
{
  return (this->_number);
}

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
  this->_name = name;
}

Zombie::~Zombie()
{
  std::cout << this->_name << " is died" << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName(std::string name)
{
  this->_name = name;
}

std::string Zombie::getName()
{
  return (this->_name);
}

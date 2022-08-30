#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(const std::string name)
{
  this->_name = name;
	randomChump(name);
}

Zombie::~Zombie()
{
  std::cout << this->_name << " is died" << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName(const std::string name)
{
  this->_name = name;
}

const std::string& Zombie::getName()
{
  return (this->_name);
}

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(const std::string name)
{
  this->_name = name;
	this->randomChump(name);
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

std::string Zombie::getName()
{
  return (this->_name);
}

void  Zombie::randomChump(const std::string name)
{
  std::cout << "My name is " << name << std::endl;
}

Zombie* Zombie::newZombie(const std::string name)
{
  return (new Zombie(name));
}
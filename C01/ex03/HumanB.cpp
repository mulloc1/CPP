#include "HumanB.hpp"

HumanB::~HumanB()
{}

HumanB::HumanB(std::string name)
  : name(name), weapon(nullptr)
{}

void  HumanB::attack()
{
  std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}

void  HumanB::setWeapon(Weapon &weapon)
{
  this->weapon = &weapon;
}

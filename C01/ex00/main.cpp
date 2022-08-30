#include <iostream>
#include "Zombie.hpp"

int main(void)
{
  Zombie  Foo("Foo");
  Zombie  *Bae;

  Foo.announce();

  Bae = newZombie("Bae");
  Bae->announce();

  Bae->setName("Jae");
  randomChump(Bae->getName());

  delete Bae;
  return (0);
}

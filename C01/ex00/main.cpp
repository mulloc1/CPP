#include <iostream>
#include "Zombie.hpp"

int main(void)
{
  Zombie  Foo("Foo");
  Zombie  *Bae;

  Foo.announce();

  Bae = Zombie::newZombie("Bae");
  Bae->announce();

  delete Bae;
  return (0);
}

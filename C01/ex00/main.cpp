#include <iostream>
#include "Zombie.hpp"

int main(void)
{
  Zombie  Foo;
  Zombie  *Bae;

  Foo.setName("Foo");
  Foo.announce();

  Bae = newZombie("Bae");
  Bae->announce();

  randomChump("Jae");

  delete Bae;
  return (0);
}

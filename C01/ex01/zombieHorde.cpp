#include "Zombie.hpp"

Zombie  *zombieHorde(const int& N)
{
  Zombie *horde;

  horde = new Zombie[N];
  return (horde);
}

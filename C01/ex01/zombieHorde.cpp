#include "Zombie.hpp"

Zombie  *zombieHorde(int N)
{
  Zombie *horde;

  horde = new Zombie[N];
  for (int i = 0; i < N; i++)
    horde[i].setNumber(i);
  return (horde);
}

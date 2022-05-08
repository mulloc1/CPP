#include "ClapTrap.hpp"

int main(void)
{
  ClapTrap A("A");
  ClapTrap B("B");

  A.setAttackPoints(2);
  B.setAttackPoints(3);

  A.attack(B.getName());
  B.takeDemage(A.getAttackPoints());

  B.attack(A.getName());
  A.takeDemage(B.getAttackPoints());
  B.attack(A.getName());
  A.takeDemage(B.getAttackPoints());
  B.attack(A.getName());
  A.takeDemage(B.getAttackPoints());
  A.beRepaired(2);
  A.takeDemage(B.getAttackPoints());
  B.attack(A.getName());
  A.takeDemage(B.getAttackPoints());
  A.beRepaired(2);
  B.beRepaired(1);
  B.beRepaired(1);
  B.beRepaired(1);
  B.beRepaired(1);
  B.beRepaired(1);
  B.beRepaired(1);
  B.beRepaired(1);
  B.beRepaired(1);
  return (0);
}

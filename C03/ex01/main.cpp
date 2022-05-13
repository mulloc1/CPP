#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap A("A");
    ScavTrap B("B");
    ScavTrap C(B);

    std::cout << "=========================" << std::endl;
    B.beRepaired(10);
    B.status();
    for (int i = 0; i < 51; i++)
    {
        std::cout << "=========================" << std::endl;
        B.setAttackDamage(20);
        B.attack(A.getName());
        A.takeDamage(B.getAttackDamage());
        A.status();
        B.status();
    }
    std::cout << "=========================" << std::endl;
    A.guardGate();
    std::cout << "=========================" << std::endl;
    A.beRepaired(10);
    A.status();
    std::cout << "=========================" << std::endl;
    B.beRepaired(10);
    B.status();
    std::cout << "=========================" << std::endl;
    return (0);
}
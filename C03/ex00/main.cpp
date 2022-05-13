#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap A("A");
    ClapTrap B("B");
    ClapTrap C(A);

    for (int i = 0; i < 11; i++)
    {
        std::cout << "=========================" << std::endl;
        B.setAttackDamage(1);
        B.attack(A.getName());
        A.takeDamage(B.getAttackDamage());
        A.status();
        B.status();
    }
    std::cout << "=========================" << std::endl;
    return (0);
}
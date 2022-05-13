#include "FragTrap.hpp"

int main(void)
{
    FragTrap A("A");
    FragTrap B("B");
    FragTrap C(B);

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
    A.highFivesGuys();
    std::cout << "=========================" << std::endl;
    A.beRepaired(10);
    A.status();
    std::cout << "=========================" << std::endl;
    B.beRepaired(10);
    B.status();
    std::cout << "=========================" << std::endl;
    return (0);
}
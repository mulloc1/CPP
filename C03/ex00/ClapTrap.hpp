#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstddef>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap& dummy);
    ~ClapTrap();
    ClapTrap& operator = (ClapTrap& dummy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void status();

    void setName(std::string name);
    void setHitPoints(unsigned int hitPoints);
    void setEnergyPoints(unsigned int energyPoints);
    void setAttackDamage(unsigned int attackDamage);

    std::string getName();
    unsigned int getHitPoints();
    unsigned int getEnergyPoints();
    unsigned int getAttackDamage();
};

std::ostream& operator << (std::ostream& out, ClapTrap& dummy);

#endif
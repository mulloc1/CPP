#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstddef>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(ClapTrap& dummy);
    ~ClapTrap();
    ClapTrap& operator = (ClapTrap& dummy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void status();

    void setName(const std::string& name);
    void setHitPoints(const unsigned int& hitPoints);
    void setEnergyPoints(const unsigned int& energyPoints);
    void setAttackDamage(const unsigned int& attackDamage);

    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;
};

std::ostream& operator << (std::ostream& out, const ClapTrap& dummy);

#endif
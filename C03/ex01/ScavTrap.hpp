#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap& dummy);
    ~ScavTrap();
    ScavTrap& operator = (const ScavTrap& dummy);

    void guardGate();
    void attack(const std::string& target);
};

std::ostream& operator << (std::ostream& out, const ScavTrap& dummy);

#endif
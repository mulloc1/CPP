#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& dummy);
    ~DiamondTrap();
    DiamondTrap& operator = (const DiamondTrap& dummy);
    void whoAmI();
};

std::ostream& operator << (std::ostream& out, const DiamondTrap& dummy);

#endif
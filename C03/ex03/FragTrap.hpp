#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& dummy);
    ~FragTrap();
    FragTrap& operator = (const FragTrap& dummy);

    void highFivesGuys(void);
};

std::ostream& operator << (std::ostream& out, const FragTrap& dummy);

#endif
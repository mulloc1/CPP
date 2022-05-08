#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
  private:
    std::string   name;
    unsigned int  hitPoints;
    unsigned int  energyPoints;
    unsigned int  attackPoints;

  public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &claptrap);
    ~ClapTrap();
    ClapTrap& operator = (ClapTrap &claptrap);

    void  attack(const std::string& target);
    void  takeDemage(unsigned int amount); 
    void  beRepaired(unsigned int amount); 

    void  setName(std::string& name);
    std::string getName();
    void  setHitPoints(unsigned int hitPoints);
    unsigned int getHitPoints();
    void  setEnergyPoints(unsigned int energyPoints);
    unsigned int getEnergyPoints();
    void  setAttackPoints(unsigned int attackPoints);
    unsigned int getAttackPoints();
};

#endif

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;
	Zombie();

public:
  	Zombie(const std::string name);
  	~Zombie();
	void announce(void);
  	void setName(const std::string name);
  	const std::string& getName();
};

void  randomChump(const std::string name);
Zombie *newZombie(const std::string& name);

#endif

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string _name;
    int         _number;

	public:
    Zombie();
    Zombie(std::string name, int number);
    ~Zombie();
		void announce(void);
    void setName(std::string name);
    std::string getName();
    void setNumber(int number);
    int getNumber();
};

Zombie* zombieHorde(int N, std::string name);

#endif

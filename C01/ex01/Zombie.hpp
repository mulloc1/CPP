#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
    int         _number;

	public:
    Zombie();
    ~Zombie();
		void announce(void);
    void setNumber(int number);
    int getNumber();
};

Zombie* zombieHorde(int N);

#endif

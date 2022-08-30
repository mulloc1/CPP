#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
    int _number;
    static int _zombieCount;

	public:
    Zombie();
    ~Zombie();
		void announce(void);
    void setNumber(const int& number);
    int getNumber();
};

Zombie* zombieHorde(const int& N);

#endif

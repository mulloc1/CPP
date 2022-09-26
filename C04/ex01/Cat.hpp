#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* _brain;
public:
    Cat();
    Cat(const Cat& dummy);
    virtual ~Cat();
    Cat& operator = (const Cat& dummy);

    virtual void makeSound() const;
    virtual void think(int n) const;
    Brain* getBrain();
    void setBrain(const Brain& brain);
};

#endif
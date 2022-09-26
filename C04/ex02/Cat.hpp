#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    std::string _type;
    Brain* _brain;
public:
    Cat();
    Cat(const Cat& dummy);
    virtual ~Cat();
    Cat& operator = (const Cat& dummy);

    virtual void makeSound() const;
    virtual void think(int n) const;
    Brain* getBrain() const;
    void setBrain(const Brain& brain);
    virtual void setType(const std::string& type);
    virtual std::string getType() const;
};

#endif
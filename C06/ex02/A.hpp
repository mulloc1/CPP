#ifndef A_HPP
# define A_HPP

# include "Base.hpp"
# include <iostream>

class A : public Base
{
private :
    std::string _type;
public:
    A();
    virtual ~A();

    std::string getType() const;
};

std::ostream& operator << (std::ostream& out, const A& a);

#endif
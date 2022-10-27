#ifndef B_HPP
# define B_HPP

# include "Base.hpp"
# include <iostream>

class B : public Base
{
private :
    std::string _type;
public:
    B();
    virtual ~B();

    std::string getType() const;
};

std::ostream& operator << (std::ostream& out, const B& b);

#endif
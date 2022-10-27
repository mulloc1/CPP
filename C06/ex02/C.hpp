#ifndef C_HPP
# define C_HPP

# include "Base.hpp"
# include <iostream>

class C : public Base
{
private :
    std::string _type;
public:
    C();
    virtual ~C();

    std::string getType() const;
};

std::ostream& operator << (std::ostream& out, const C& c);

#endif
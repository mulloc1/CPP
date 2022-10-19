#include "C.hpp"

C::C()
: _type("C")
{}

C::~C() 
{}

std::string C::getType() const
{
    return this->_type;
}

std::ostream& operator << (std::ostream& out, const C& c)
{
    out << c.getType();
    return out;
}

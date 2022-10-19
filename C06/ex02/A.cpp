#include "A.hpp"

A::A()
: _type("A")
{}

A::~A() 
{}

std::string A::getType() const
{
    return this->_type;
}

std::ostream& operator << (std::ostream& out, const A& A)
{
    out << A.getType();
    return out;
}
#include "B.hpp"

B::B()
: _type("B")
{}

B::~B() 
{}

std::string B::getType() const
{
    return this->_type;
}

std::ostream& operator << (std::ostream& out, const B& B)
{
    out << B.getType();
    return out;
}
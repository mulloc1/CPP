#include "Data.hpp"

Data::Data()
: _data(5)
{}

Data::Data(const Data& dummy)
{
    *this = dummy;
}

Data::~Data()
{}

Data& Data::operator = (const Data& dummy)
{
    this->_data = dummy._data;
    return (*this);
}
    
int Data::getData()
{
    return (this->_data);
}
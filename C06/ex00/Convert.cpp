#include "Convert.hpp"
Convert::Convert()
{}

Convert::Convert(char *str)
{
    _data = std::atof(str);
}

Convert::~Convert()
{}

Convert::Convert(const Convert& dummy)
{
    *this = dummy;
}

Convert& Convert::operator = (const Convert& dummy)
{
    this->_data = dummy._data;
    return (*this);
}

double Convert::getData()
{
    return (this->_data);
}
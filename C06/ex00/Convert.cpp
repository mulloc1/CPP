#include "Convert.hpp"

template <typename T, typename U>
int flowCheck(T num, U overFlowNum, U underFlowNum)
{
    if (num > overFlowNum)
        return (1);
    else if (num < underFlowNum)
        return (1);
    return (0);
}

Convert::Convert(char *str)
: _data(0), _nan(0), _inf(0)
{
    if (static_cast<std::string> (str) == "nan")
        this->_nan = 1;
    else if (static_cast<std::string> (str) == "inf")
        this->_inf = 1;
    else 
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

void Convert::printChar()
{
    std::cout << "char: ";
    if (this->_nan == 1 || this->_inf == 1 || flowCheck(this->_data, CHAR_MAX, CHAR_MIN))
        std::cout << "impossible" << std::endl;
    else if (static_cast<char> (this->_data) >= ' ')
        std::cout << "'" << static_cast<char> (this->_data) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void Convert::printInt()
{
    std::cout << "int: ";
    if (this->_nan == 1 || this->_inf == 1 || flowCheck(this->_data, INT_MAX, INT_MIN))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int> (this->_data) << std::endl;
}

void Convert::printFloat()
{
    std::cout << "float: ";
    if (this->_nan == 1)
        std::cout << "nan";
    else if (this->_inf == 1)
        std::cout << "inf";
    else
        std::cout << this->_data;
    if (this->_data - static_cast <int> (this->_data) == 0 && this->_nan == 0)
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void Convert::printDouble()
{
    std::cout << "double: ";
    if (this->_nan == 1)
        std::cout << "nan";
    else if (this->_inf == 1)
        std::cout << "inf";
    else
        std::cout << this->_data;
    if (this->_data - static_cast <long> (this->_data) == 0 && this->_nan == 0)
        std::cout << ".0";
    std::cout << std::endl;
}

void Convert::display()
{
    this->printChar();
    this->printInt();
    this->printFloat();
    this->printDouble();
}


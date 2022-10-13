#include "Convert.hpp"

template <typename T, typename U>
bool flowCheck(T num, U overFlowNum, U underFlowNum)
{
    if (num > overFlowNum)
        return (true);
    else if (num < underFlowNum)
        return (true);
    return (false);
}

Convert::Convert(char *str)
: _data(0), _nan(false), _inf(false)
{
    std::string string = static_cast<std::string> (str);
    if (!string.find("nan", 0))
        this->_nan = true;
    else if (!string.find("inf", 0))
        this->_inf = true;
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
    this->_inf = dummy._inf;
    this->_nan = dummy._nan;
    return (*this);
}

void Convert::printChar()
{
    std::cout << "char: ";
    if (this->_nan == true || this->_inf == true || flowCheck(this->_data, CHAR_MAX, CHAR_MIN))
        std::cout << "impossible" << std::endl;
    else if (static_cast<char> (this->_data) >= ' ')
        std::cout << "'" << static_cast<char> (this->_data) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void Convert::printInt()
{
    std::cout << "int: ";
    if (this->_nan == true || this->_inf == true || flowCheck(this->_data, INT_MAX, INT_MIN))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int> (this->_data) << std::endl;
}

void Convert::printFloat()
{
    std::cout << "float: ";
    if (this->_nan == true)
        std::cout << "nan";
    else if (this->_inf == true)
        std::cout << "inf";
    else
        std::cout << this->_data;
    if (this->_data - static_cast <int> (this->_data) == 0 && this->_nan == false && this->_inf == false)
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void Convert::printDouble()
{
    std::cout << "double: ";
    if (this->_nan == true)
        std::cout << "nan";
    else if (this->_inf == true)
        std::cout << "inf";
    else
        std::cout << this->_data;
    if (this->_data - static_cast <long> (this->_data) == 0 && this->_nan == false && this->_inf == false)
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


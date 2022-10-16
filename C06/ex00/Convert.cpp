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
: _nan(false), _inf(false)
{
    std::string string = static_cast<std::string> (str);
    if (!string.find("nan", 0))
        this->_nan = true;
    else if (!string.find("inf", 0))
        this->_inf = true;
    _dataD = std::atof(str);
    _dataF = static_cast<float> (std::atof(str));
    _dataI = std::atoi(str);
    _dataC = static_cast<char> (std::atoi(str));
}

Convert::~Convert()
{}

Convert::Convert(const Convert& dummy)
{
    *this = dummy;
}

Convert& Convert::operator = (const Convert& dummy)
{
    this->_dataD = dummy._dataD;
    this->_dataF = dummy._dataF;
    this->_dataI = dummy._dataI;
    this->_dataC = dummy._dataC;
    this->_inf = dummy._inf;
    this->_nan = dummy._nan;
    return (*this);
}

void Convert::printChar()
{
    std::cout << "char: ";
    if (this->_nan == true || this->_inf == true || flowCheck(this->_dataC, CHAR_MAX, CHAR_MIN))
        std::cout << "impossible" << std::endl;
    else if (this->_dataC >= ' ')
        std::cout << "'" << this->_dataC << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void Convert::printInt()
{
    std::cout << "int: ";
    if (this->_nan == true || this->_inf == true || flowCheck(this->_dataI, INT_MAX, INT_MIN))
        std::cout << "impossible" << std::endl;
    else
        std::cout << this->_dataI << std::endl;
}

void Convert::printFloat()
{
    std::cout << "float: ";
    if (this->_nan == true)
        std::cout << "nan";
    else if (this->_inf == true)
        std::cout << "inf";
    else
        std::cout << this->_dataF;
    if (this->_dataF - static_cast <int> (this->_dataF) == 0 && this->_nan == false && this->_inf == false)
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
        std::cout << this->_dataD;
    if (this->_dataD - static_cast <long> (this->_dataD) == 0 && this->_nan == false && this->_inf == false)
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


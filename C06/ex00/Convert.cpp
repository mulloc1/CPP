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

bool isChar(char *str) {
    std::string string = static_cast<std::string> (str);
    char c = string.at(0);
    if (c >= '0' && c <= '9')
        c = std::atoi(str);
    if ((c >= 32 && c <= 127) && string.size() == 1)
        return true;
    return false;
}

bool isString(char *str) {
    if (std::atoi(str))
        return false;
    std::string string = static_cast<std::string> (str);
    int cnt = 0;
    for (unsigned long i = 0; i < string.size(); i++)
    {
        char c = string.at(i);
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            if (++cnt >= 2)
                return true;
    }
    return false;
}

Convert::Convert(char *str)
: _nan(false), _inf(false)
{
    std::string string = static_cast<std::string> (str);
    if (!string.find("nan", 0))
        this->_nan = true;
    else if (!string.find("inf", 0))
        this->_inf = true;
    else if (isString(str))
        this->_imp = true;
    if (isChar(str)) 
    {
        char c = string.at(0);
        _dataD = static_cast<double> (c);
        _dataF = static_cast<float> (c);
        _dataI = static_cast<int> (c);
        _dataC = c;
    }
    else 
    {
        _dataD = std::atof(str);
        _dataF = static_cast<float> (std::atof(str));
        _dataI = std::atol(str);
        _dataC = std::atoi(str);
    }
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
    if (this->_nan || this->_inf || this->_imp || flowCheck(this->_dataC, CHAR_MAX, CHAR_MIN))
        std::cout << "impossible" << std::endl;
    else if (this->_dataC >= ' ')
        std::cout << "'" << static_cast<char> (this->_dataC) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void Convert::printInt()
{
    std::cout << "int: ";
    if (this->_nan || this->_inf || this->_imp || flowCheck(this->_dataI, INT_MAX, INT_MIN))
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
    else if (this->_imp)
        std::cout << "impossible";
    else
        std::cout << this->_dataF;
    if (this->_dataF - static_cast <int> (this->_dataF) == 0 && this->_nan == false && this->_inf == false && !this->_imp)
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
    else if (this->_imp)
        std::cout << "impossible";
    else
        std::cout << this->_dataD;
    if (this->_dataD - static_cast <long> (this->_dataD) == 0 && this->_nan == false && this->_inf == false && !this->_imp)
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


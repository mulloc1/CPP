#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstring>

class Convert
{
private:
    double  _data;
public:
    Convert();
    Convert(char *str);
    Convert(const Convert& dummy);
    ~Convert();
    Convert& operator = (const Convert& dummy);

    double getData();
};

#endif
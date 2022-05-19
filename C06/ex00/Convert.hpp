#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstring>
# include <cfloat>
# include <climits>

class Convert
{
private:
    double  _data;
    int     _nan;
    int     _inf;
public:
    Convert(char *str);
    Convert(const Convert& dummy);
    ~Convert();
    Convert& operator = (const Convert& dummy);

    void printDouble();
    void printFloat();
    void printInt();
    void printChar();
    void display();
};

#endif
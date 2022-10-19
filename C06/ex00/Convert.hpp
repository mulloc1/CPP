#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstring>
# include <cfloat>
# include <climits>

class Convert
{
private:
    double  _dataD;
    float   _dataF;
    long    _dataI;
    int     _dataC;
    bool    _nan;
    bool    _inf;
    bool    _imp;
    bool    _infp;
    bool    _infm;
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
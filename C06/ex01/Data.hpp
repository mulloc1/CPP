#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
private:
    int _data;
public:
    Data();
    Data(const Data& dummy);
    ~Data();
    Data& operator = (const Data& dummy);
    
    int getData() const;
};

std::ostream& operator << (std::ostream& out, const Data& data);

#endif
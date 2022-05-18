#ifndef DATA_HPP
# define DATA_HPP

class Data
{
private:
    int _data;
public:
    Data();
    Data(const Data& dummy);
    ~Data();
    Data& operator = (const Data& dummy);
    
    int getData();
};

#endif
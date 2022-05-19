#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
: _idx(0), _cnt(0)
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;;
}

void MateriaSource::learnMateria(AMateria*)
{
    if (this->_cnt >= 4)
    {
        std::cout << "inventory is full!!" << std::endl;
        return ;
    }
    this->_inven[this->_idx] = m;
    this->_idx = (this->_idx + 1) % 4;
    this->_cnt++;
    if (this->cnt > 4)
        this->cnt = 4;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria *temp;

    if (this->_cnt == 0)
    {
        if (type == "ice")
            temp = new Ice(type);
        else if (type == "cure")
            temp = new Cure(type);
    }
    else
    {
        temp = this->_inven[this->_idx];
        delete this->_inven[this->_idx];
        this->_inven[this->_idx] = NULL;
        this->_idx = (this->_idx + 1) % 4;
        this->_cnt--;
    }
    return (temp);
}
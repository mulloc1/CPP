#include "Character.hpp"

Character::Character(const std::string& name)
: _name(name), _idx(0), _cnt(0)
{
    std::cout << "Character constructor called" << std::endl;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
    if (this->_cnt == 0)
    {
        std::cout << "inventory is empty!!" << std::endl;
        return ;
    }
    delete this->_inven[this->_idx];
    this->_inven[this->_idx] = NULL;
    this->_idx = (this->_idx + 1) % 4;
    this->_cnt--;
}

void Character::use(int idx, ICharater& target)
{
    if (this->_cnt == 0)
    {
        std::cout << "inventory is empty!!" << std::endl;
        return ;
    }
    if (idx < 4 && idx < 0)
    {
        std::cout << "failed" << std::endl;
        return ;
    }
    std::cout << this->_inven[idx].use(target);
}
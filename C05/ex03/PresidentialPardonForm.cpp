#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: Form("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& dummy)
: Form("PresidentialPardonForm", 25, 5), _target(dummy.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl; 
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& dummy)
{
    dummy.getName();
    return *this;
}

const std::string& PresidentialPardonForm::getTarget() const 
{
    return (this->_target);
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() <= this->getExecuteGrade())
    {
        std::cout << "Zaphod Beeblebrox pardoned " << this->getTarget() << std::endl;
        return (true);
    }
    return (false);
}

std::ostream& operator << (std::ostream& out, const PresidentialPardonForm& dummy)
{
    out << dummy.getName() << std::endl;
    return out;
}

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& dummy)
: Form("RobotomyRequestForm", 72, 45), _target(dummy.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl; 
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& dummy)
{
    dummy.getName();
    return *this;
}

const std::string& RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 99);

    if (executor.getGrade() <= this->getExecuteGrade())
    {
        std::cout << "drillllll...." << std::endl;
        std::cout << this->getTarget() << " has been robotized" << std::endl;
        if (dis(gen) % 2 == 0)
            std::cout << "robotized success" << std::endl;
        else
            std::cout << "robotized failed" << std::endl;
        return (true);
    }
    return (false);
}

std::ostream& operator << (std::ostream& out, const RobotomyRequestForm& dummy)
{
    out << dummy.getName() << std::endl;
    return out;
}

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    const std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& dummy);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm& operator = (const RobotomyRequestForm& dummy);

    const std::string& getTarget() const;

    virtual bool execute(Bureaucrat const &executor) const;
};

std::ostream& operator << (std::ostream& out, const RobotomyRequestForm& dummy);

#endif
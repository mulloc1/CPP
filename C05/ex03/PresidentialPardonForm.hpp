#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    const std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& dummy);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm& operator = (const PresidentialPardonForm& dummy);

    const std::string& getTarget() const;

    virtual bool execute(Bureaucrat const &executor) const;
};

std::ostream& operator << (std::ostream& out, const PresidentialPardonForm& dummy);

#endif
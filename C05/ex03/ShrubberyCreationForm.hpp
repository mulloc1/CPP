#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    const std::string _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& dummy);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator = (const ShrubberyCreationForm& dummy);

    const std::string& getTarget() const;

    virtual bool execute(Bureaucrat const &executor) const;
};

std::ostream& operator << (std::ostream& out, const ShrubberyCreationForm& dummy);

#endif
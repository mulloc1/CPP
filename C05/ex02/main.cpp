#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat b("jaebae", 150);
    Form f("jaebae sign", 50);

    try{
        f.beSigned(b);
    } catch (std::exception e) {
        e.what();
    }

    try {
        b.signForm(f.getSigned(), f.getName());
    } catch (std::exception e) {
        e.what();
    }
    return (0);
}
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(const Brain& dummy);
    ~Brain();
    Brain& operator = (const Brain& dummy);
    void setIdeas(const std::string* ideas, int len);
    std::string* getIdeas();
};

#endif
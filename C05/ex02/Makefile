NAME = ex02

CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp Form.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAG) -c $< -o $@

re : clean all

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) -o $@ $^

.PHONY : re fclean clean all 

NAME = ex03

CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

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

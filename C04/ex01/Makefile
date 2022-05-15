NAME = ex01

CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

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
	$(CC) $(CFLAG) -fsanitize=address -o $@ $^

.PHONY : re fclean clean all 

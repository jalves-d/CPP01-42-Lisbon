CFLAGS = -Wall -Wextra -Werror -I includes

NAME = Zombie

SRCS =	./main.cpp \
		./Zombie.cpp \
		./ZombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ -g -std=c++03 $(CFLAGS) $^ -o $@

%.o: %.cpp
	clang++ -g -std=c++03 $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re
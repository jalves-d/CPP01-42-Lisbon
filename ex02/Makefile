CFLAGS = -Wall -Wextra -Werror -I includes

NAME = main

SRCS =	./main.cpp

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
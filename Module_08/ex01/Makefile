NAME = span

CC = c++

FLAGS = -Werror -Wall -Wextra -std=c++98

SRC = main.cpp Span.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@

clean:
	@$(RM) $(NAME)

re: clean all
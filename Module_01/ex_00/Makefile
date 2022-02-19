NAME = zombie

CC = c++

FLAGS = -Werror -Wall -Wextra -g -std=c++98

SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@

clean:
	@$(RM) $(NAME)

re: clean all
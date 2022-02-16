NAME = zombieHorde

CC = c++

FLAGS = -Werror -Wall -Wextra -std=c++98

SRC = ZombieHorde.cpp Zombie.cpp main.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	$(RM) $(NAME)

re: clean all
NAME = diamondtrap

CC = c++

FLAGS = -Werror -Wall -Wextra -Wshadow -std=c++98

SRC = main.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp ScavTrap.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@

clean:
	@$(RM) $(NAME)

re: clean all
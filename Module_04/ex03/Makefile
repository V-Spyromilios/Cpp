NAME = amateria

CC = c++

FLAGS = -Werror -Wall -Wextra -g -std=c++98

SRC = main.cpp Cure.cpp AMateria.cpp Ice.cpp Character.cpp MateriaSource.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@

clean:
	@$(RM) $(NAME)

re: clean all
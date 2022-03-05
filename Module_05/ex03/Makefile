NAME = intern

CC = c++

FLAGS = -Werror -Wall -Wextra -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@

clean:
	@$(RM) $(NAME)

re: clean all
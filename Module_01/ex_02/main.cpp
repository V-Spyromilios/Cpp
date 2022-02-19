#include <iostream>
#include <string>

int	main(void) {
	std::string brain ="HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "&var: " << &brain <<std::endl;

	std::cout <<"stringPTR: " << stringPTR <<std::endl;

	std::cout <<"&stringREF: " << &stringREF << std::endl;

	std::cout <<"var: " << brain << std::endl;

	std::cout << "*stringPTR: " << *stringPTR << std::endl;

	std::cout <<"stringREF: " << stringREF << std::endl;

	return (0);

}
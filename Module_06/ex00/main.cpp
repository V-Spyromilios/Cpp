#include "converter.hpp"
#include <locale>

int		main(int argc, char *argv[]) {

	if (argc !=2) {
		std::cout << "Max one argument to be provided" << std::endl;
		return (-1);
	}
	std::string input;
	input = argv[1];

	Converter *c = new Converter();
	for (std::string size_type i = 0; i < input.size(); i++) {
		if ((!std::isalnum(input[i] && (input[i]) != '-') && (!std::isalnum(input[i]) && *input[i] != '+') && (!std::isalnum(input[i]) && *input[i] != '.')) {
			std::cout << "invalid argument.." << std::endl;
			return (-1);
		}
		Converter::Convert(input);
		delete c;
		return (0);
	} 
}
#include "Karen.hpp"


int main(int argc, char **argv) {
	Karen karen;
	std::string input;

	if (argc < 2) {
		std::cout << "What ? [No args - No Fun]" << std::endl;
		return (-1);
	}
	if (argc > 2) {
		std::cout << "Too much talking !" << std::endl;
		return (-1);
	}
	input  = argv[1];
	karen.complain(input);

	return (0);
}
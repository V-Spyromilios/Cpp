#include "Karen.hpp"


int main() {
	Karen karen;
	Karen new_karen;

	karen.complain("WARNING");
	karen.complain("ERROR");
	new_karen.complain("INFO");
	new_karen.complain("DEBUG");

	return (0);
}
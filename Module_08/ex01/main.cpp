#include "Span.hpp"

int		main() {

	Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	sp.addMany(5);
	
	// Span newSpan;
	// newSpan = sp;
	
	std::cout << "Shortest Span: " <<sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " <<sp.longestSpan() << std::endl;
	sp.printVector();
	return (0);
}

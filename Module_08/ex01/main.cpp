#include "Span.hpp"

int		main() {

	Span sp = Span(4);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	sp.addMany(14);
	
	Span newSpan;
	newSpan = sp;
	
	newSpan.printVector();
	std::cout << "Shortest Span: " <<newSpan.shortestSpan() << std::endl;
	std::cout << "Longest Span: " <<newSpan.longestSpan() << std::endl;
	return (0);
}

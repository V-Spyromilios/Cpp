#include "Bureaucrat.hpp"

int		main(void) {

	Bureaucrat f("Nea Dimokratia", 160);
	Bureaucrat d;
	Bureaucrat b0;
	std::cout << "Name of d: " << d.getName() << std::endl;
	std::cout << "Grade of d: " << d.getGrade() << std::endl;
	std::cout << "Name of f: " << f.getName() << std::endl;
	std::cout << "Grade of f: " << f.getGrade() << std::endl;
	std::cout << "== == ==" << std::endl;
	b0.increment();
	std::cout << "Name of b0: " << b0.getName() << std::endl;
	std::cout << "Grade of b0: " << b0.getGrade() << std::endl;
	std::cout << "== == ==" << std::endl;
	Bureaucrat b("Borris", 150);
	std::cout << "Name of b: " << d.getName() << std::endl;
	std::cout << "Grade of : " << d.getGrade() << std::endl;
	d.decrement();
	std::cout << "Grade of b: " << d.getGrade() << std::endl;


	return (0);
}
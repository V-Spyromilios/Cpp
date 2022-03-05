#include "Form.hpp"

int		main(void) {

	Bureaucrat b("Kostakis", 2);
	Bureaucrat s("Slave", 122);
	Form f("form007", 3, 1);
	std::cout << "Bureaucrat " <<b.getName() << " has Grade " << b.getGrade() << std::endl;
	std::cout << "Form " <<f.getName() << " requires " << f.getGradeSign() << std::endl;
	f.beSigned(b);
	std::cout << "=== == == =" <<std::endl;
	f.beSigned(s);
	std::cout << "=== == == =" <<std::endl;
	std::cout << f;

	return (0);
}
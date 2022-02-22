#include "FragTrap.hpp"

int		main(void) {

	FragTrap ft("First");
	std:: cout << "ft name is " << ft.getName() << std::endl;
	std:: cout << " has Damage " << ft.getAD() << std::endl;
	std:: cout << "ft has Energy " << ft.getEP() << std::endl;
	std:: cout << "ft has health " << ft.getHP() << std::endl;
	std::cout << "=====" << std::endl;

	FragTrap ft2("Second");
	std:: cout << "ft2 name is " << ft2.getName() << std::endl;
	std:: cout << "ft2 has Damage " << ft2.getAD() << std::endl;
	std:: cout << "ft2has Energy " << ft2.getEP() << std::endl;
	std:: cout << "ft2 has health " << ft2.getHP() << std::endl;
	std::cout << "=====" << std::endl;

	ft.attack("Second");
	ft2.takeDamage(5);
	std:: cout << "ft2 has health " << ft2.getHP() << std::endl;
	ft2.attack("First");
	ft.takeDamage(200);
	ft2.guardGate();
	ft2.highFivesGuys();
	return (0);
}
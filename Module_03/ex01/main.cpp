#include "ScavTrap.hpp"

int		main(void) {

	ScavTrap d("Papias");
	std:: cout << "d name is " << d.getName() << std::endl;
	std:: cout << "d has Damage " << d.getAD() << std::endl;
	std:: cout << "d has Energy " << d.getEP() << std::endl;
	std:: cout << "d has health " << d.getHP() << std::endl;
	std::cout << "=====" << std::endl;

	ScavTrap s("Karioliis");
	std:: cout << "s name is " << s.getName() << std::endl;
	std:: cout << "s has Damage " << s.getAD() << std::endl;
	std:: cout << "s has Energy " << s.getEP() << std::endl;
	std:: cout << "s has health " << s.getHP() << std::endl;
	std::cout << "=====" << std::endl;

	s.attack("Papias");
	d.takeDamage(5);
	std:: cout << "d has health " << d.getHP() << std::endl;
	d.attack("Karioliis");
	s.takeDamage(20);
	d.guardGate();
	std:: cout << "d has energy " << d.getEP() << std::endl;
	std:: cout << "s has energy " << s.getEP() << std::endl;
	d.beRepaired(1000);
	std:: cout << "d has health " << d.getEP() << std::endl;
	return (0);
}
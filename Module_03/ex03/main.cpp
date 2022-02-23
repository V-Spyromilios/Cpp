#include "DiamondTrap.hpp"

int		main(void) {
	DiamondTrap D("Tim");
	DiamondTrap DD ("Papasouzas");
	std::cout << "=====" <<std::endl;
	D.highFivesGuys();
	std::cout << "Tim has: " << D.getEP() << " Energy Points."<<std::endl;
	std::cout << "Tim has: " << D.getHP() << " Health Points."<<std::endl;
	std::cout << "Tim has: " << D.getAD() << " Attack Damage."<<std::endl;
	std::cout << "=====" << std::endl;
	D.attack(DD.getName());
	DD.takeDamage(10);
	std::cout << "DD now has: " << DD.getHP() << " Health Points."<<std::endl;
	std::cout << "Tim now has : " << D.getEP() << " Energy Points."<<std::endl;
	std::cout << "=====" << std::endl;
	D.whoAmI();
	DD.whoAmI();
	return (0);
}
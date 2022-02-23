#include "DiamondTrap.hpp"

int		main(void) {
	DiamondTrap D("name1");
	DiamondTrap DD;
	std::cout << "=====" <<std::endl;
	D.highFivesGuys();
	std::cout << "name1 (D) has: " << D.getEP() << "Energy."<<std::endl;
	std::cout << "name1 (D) has: " << D.getHP() << "Health."<<std::endl;
	std::cout << "name1 (D) has: " << D.getAD() << "AD."<<std::endl;
	
	D.attack(DD.getName());
	std::cout << "name1 (D) has new : " << D.getEP() << " Energy."<<std::endl;
	D.whoAmI();

	


	return (0);
}
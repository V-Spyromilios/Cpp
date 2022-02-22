#include "ClapTrap.hpp"

int		main() {

	ClapTrap	mankas("Mankas");
	ClapTrap	kariolis("Kariolis");

	mankas.attack("Kariolis");
	kariolis.takeDamage(2);
	kariolis.takeDamage(9);
	kariolis.attack("mankas");

	return (0);

}
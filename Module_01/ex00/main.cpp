#include "Zombie.hpp"

int		main(void) {
	Zombie	*makis = newZombie("makis");
	makis->announce();
	delete(makis);
	Zombie zombie("zombie");
	zombie.announce();
	randomChump("Augolemonos");
	//system("leaks zombie");
	return (0);
}
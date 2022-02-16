#include "Zombie.hpp"

int	main(void) {
	Zombie z;
	Zombie *horde = z.zombieHorde(10, "ZOMBIE");
	//static zombieHorde
	//Zombie *horder = Zombie::zombieHorde(N, name);
	//static also can be accessed with -> (if static obv. belongs to the instances as well);

	delete[] horde;
	return (0);
}
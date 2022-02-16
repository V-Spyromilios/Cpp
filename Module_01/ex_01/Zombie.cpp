#include "Zombie.hpp"

void	Zombie::announce(void){
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name): _name(name) {
}

Zombie::Zombie() {

}

Zombie::~Zombie() {
	std::cout << "Died\n";
}

Zombie* Zombie::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

Zombie*	Zombie::zombieHorde(int N, std::string name) {
	Zombie *Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		//Horde[i] = Zombie::newZombie(name);
		Horde[i]._name = name;
		Horde[i].announce();
	}
	return(Horde);
}
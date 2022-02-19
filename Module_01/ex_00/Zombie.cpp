#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
	std::cout << this->_name << " is alive\n";		
}

Zombie::~Zombie() {
	std::cout << this->_name << " is dead, baby.." << std::endl;
}

void	Zombie::announce(void){
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..."<< std::endl;
}


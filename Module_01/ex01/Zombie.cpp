#include "Zombie.hpp"

void	Zombie::announce(void){
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name): _name(name) {
}

Zombie::Zombie() {
	std::cout <<"Welcome\n";
}

Zombie::~Zombie() {
	std::cout << "Died\n";
}

void	Zombie::setname(std::string name) {
	this->_name = name;
}

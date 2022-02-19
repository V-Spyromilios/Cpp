#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weaponA(weapon) {

}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weaponA.getType() <<std::endl;
}

HumanA::~HumanA() {
	return ;
}
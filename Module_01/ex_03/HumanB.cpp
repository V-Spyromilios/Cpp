#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {

}

HumanB::~HumanB() {

}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weaponB = &weapon;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->weaponB->getType() <<std::endl;
}

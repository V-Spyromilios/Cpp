#include "Weapon.hpp"

void Weapon::setType(std::string weapon) {
	this->_type = weapon;
}

Weapon::Weapon(std::string weapon) {
	this->_type = weapon;
}

Weapon::~Weapon() {
	return ;
}
//den einai static giati exei Weapon::
//static  borei na gine accessed kai xoris instance.
// static : Den xreiazetai instance.
//member? -> exei Weapon::. member einai orata mono apo to instance.
const std::string &Weapon::getType(void) const {
	std::string const &ref = this->_type;
	return (ref);
}

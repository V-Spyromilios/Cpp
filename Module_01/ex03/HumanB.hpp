#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
public:

	std::string name;
	Weapon *weaponB;

	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif
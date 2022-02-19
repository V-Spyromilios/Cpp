#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	std::string name;
	Weapon &weaponA;
	void	attack(void);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
private:
	std::string _type;

public:
	const	std::string &getType() const;
	void	setType(std::string weapon);
	Weapon(std::string weapon);
	~Weapon();

};

#endif
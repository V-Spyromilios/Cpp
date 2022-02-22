#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:

	ClapTrap(std::string name);
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string getName();
	int			getHP();
	int			getEP();
	int			getAD();


private:

	std::string _name;
	int	_hPoints;
	int _ePoints;
	int _aDamage;

};

#endif
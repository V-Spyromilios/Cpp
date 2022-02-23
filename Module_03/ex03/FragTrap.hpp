#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap: virtual public ClapTrap {
public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap & src);
	FragTrap& operator=(FragTrap const & src);
	~FragTrap();

	void 	guardGate();
	void 	highFivesGuys(void);
	void	attack(const std::string &target);

private:

	std::string _name;
	int	_hPoints;
	int _ePoints;
	int _aDamage;

};
#endif
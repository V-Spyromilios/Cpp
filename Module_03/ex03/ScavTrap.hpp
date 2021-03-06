#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap: virtual public ClapTrap {
public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap & src);
	ScavTrap& operator=(ScavTrap const & src);
	virtual ~ScavTrap();

	// virtual void 	guardGate();
	void	attack(const std::string &target);

};
#endif
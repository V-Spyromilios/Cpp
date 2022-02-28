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

	virtual void 	guardGate();
	void 	highFivesGuys(void);
	void	attack(const std::string &target);

};
#endif
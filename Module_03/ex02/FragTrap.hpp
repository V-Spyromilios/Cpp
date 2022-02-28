#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#define MAX_AD 30
#define MAX_HP 100
#define MAX_EP 100

class FragTrap: public ClapTrap {
public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap & src);
	FragTrap& operator=(FragTrap const & src);
	~FragTrap();

	void 	guardGate();
	void 	highFivesGuys(void);
	void	attack(const std::string &target);

};
#endif
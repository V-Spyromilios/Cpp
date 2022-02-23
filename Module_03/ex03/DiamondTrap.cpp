#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "";
	std::cout << "DiamondTrap Void Constructor called." <<std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) {
	FragTrap f;
	ScavTrap s;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->FragTrap::setHP(f.getHP());
	this->ScavTrap::setEP(s.getEP());
	this->FragTrap::setAD(f.getAD());
	std::cout << "DiamondTrap Name Constructor called." <<std::endl;

}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
		*this = src;
		std::cout << "DiamondTrap Copy Constructor called." <<std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & src) {
	if (this != &src) {
		this->FragTrap::setName(src.FragTrap::getName());
		this->FragTrap::setHP(src.FragTrap::getHP());
		this->ScavTrap::setEP(src.ScavTrap::getEP());
		this->FragTrap::setAD(src.FragTrap::getAD());
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called." <<std::endl;
}

// void	takeDamage(unsigned int amount);
	 
// void	beRepaired(unsigned int amount);

// void	setName(std::string name);
	 
std::string getName();

void 	DiamondTrap::whoAmI(void) {
	std::cout << "This: " << this->_name << " ClapTrap: " << ClapTrap::_name << std::endl;
}
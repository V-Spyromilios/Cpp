#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) {
	this-> _hPoints = 10;
	this-> _ePoints = 10;
	this-> _aDamage = 0;
	std::cout << this->_name << " is ready to fight" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_hPoints <= 0) {
		std::cout << "Im already dead" << std:: endl;
		return ;
	}
	if (this->_ePoints < 1) {
		std::cout << "I am too tired to do anything right now" << std::endl;
	}
	else {
		this->_ePoints--;
		std::cout << "ClapTrap " << this->getName() << " attacks "  << target 
	<< ","<< " causing " << this->_aDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->_hPoints -= amount;
	if (this->_hPoints <= 0) {
		std::cout << "Flawless Victory" << std::endl;
		return ;
	}
	std::cout << "Aaah! You just caused me " << amount
	<< " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_ePoints > 0 && this->_hPoints > 0 && this->_hPoints < 10) {
		this->_ePoints--;
		this->_hPoints += amount;
		if (this->_hPoints > 10) {
			this->_hPoints = 10;
			std::cout << "Wow, superBoosted, Max Health Points "
			<< this->_hPoints << std::endl;
		}
		std::cout << "Im feeling like " << amount 
		<< "points better :)" << std::endl;
	}
	else if (this-> _hPoints == 10) {
		std::cout << "I'm feeling good, no need for repair" << std::endl;
	}
	else if(this->_hPoints <= 0) {
		std::cout << "Im already dead" << std::endl;
		return ;
	}
	else if (this->_ePoints <= 0){
		std::cout << "No energy left to be repaired..." << std::endl;
	}
}

std::string	ClapTrap::getName() {
	return (this->_name);
}

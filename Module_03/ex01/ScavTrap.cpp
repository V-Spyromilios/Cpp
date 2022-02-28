#include "ScavTrap.hpp"


ScavTrap::ScavTrap() {
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	this->setName(""); 
	std::cout << "ScavTrap Void Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	this->setName(name); 
	std::cout << "ScavTrap Constructor Called with name: " << name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & src) {
	if (this != &src) {
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setAD(src.getAD());
		this->setEP(src.getEP());
	}
	std::cout << "ScavTrap Copy Constructore called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "Gate Keeper Mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->getHP() <= 0) {
		std::cout << "I'm already dead" << std:: endl;
		return ;
	}
	if (this->getEP() < 1) {
		std::cout << "I am too tired to do anything right now" << std::endl;
	}
	else {
		this->setEP(this->getHP() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks "  << target 
	<< ","<< " causing " << this->getAD() << " points of damage!" << std::endl;
	}
}
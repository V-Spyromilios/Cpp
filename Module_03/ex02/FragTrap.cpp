#include "FragTrap.hpp"


FragTrap::FragTrap() {
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	this->setName(""); 
	std::cout << "FragTrap Void Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	this->setName(name); 
	std::cout << "FragTrap Constructor Called with name: " << name << std::endl;
}

FragTrap::FragTrap(FragTrap & src) {
	if (this != &src) {
		this->_name = src.getName();
		this->_hPoints = src.getHP();
		this->_aDamage = src.getAD();
		this->_ePoints = src.getEP();
	}
	std::cout << "FragTrap Copy Constructore called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::guardGate() {
	std::cout << "<FragTrap> Gate Keeper Mode" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (this->getHP() <= 0) {
		std::cout << "I'm already dead, but still a true FragTrap" << std:: endl;
		return ;
	}
	if (this->getEP() < 1) {
		std::cout << "FragTrap is tired.." << std::endl;
	}
	else {
		this->setEP(this->getHP() - 1);
		std::cout << "FragTrap " << this->getName() << " attacks "  << target 
	<< ","<< " causing " << this->getAD() << " points of damage!" << std::endl;
	}
}

void 	FragTrap::highFivesGuys(void) {
	std::cout << "Gimme five you Frag!" << std::endl;
}
#include "FragTrap.hpp"


FragTrap::FragTrap() {
	this->setHP(MAX_HP);
	this->setEP(MAX_EP);
	this->setAD(MAX_AD);
	this->setName(""); 
	std::cout << "FragTrap Void Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->setHP(MAX_HP);
	this->setEP(MAX_EP);
	this->setAD(MAX_AD);
	this->setName(name); 
	std::cout << "FragTrap Constructor Called with name: " << name << std::endl;
}

FragTrap::FragTrap(FragTrap & src) {
	if (this != &src) {
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setAD(src.getAD());
		this->setEP(src.getEP());
	}
	std::cout << "FragTrap Copy Constructore called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::guardGate() {
	if (this->getHP() > 0) {
	std::cout << "<FragTrap> Gate Keeper Mode" << std::endl;
	}
	else {
		std::cout << "Can't Guard any gate right now, I am DEAD AF" << std::endl;
	}
}

void	FragTrap::attack(const std::string &target) {
	if (this->getHP() <= 0) {
		std::cout << "I'm already dead, but still a huge fan of your code" << std:: endl;
		return ;
	}
	if (this->getEP() < 1) {
		std::cout << "I am too tired.." << std::endl;
	}
	else {
		this->setEP(this->getHP() - 1);
		std::cout << "FragTrap " << this->getName() << " attacks "  << target 
	<< ","<< " causing " << this->getAD() << " points of damage!" << std::endl;
	}
}

void 	FragTrap::highFivesGuys(void) {
	if (this->getHP() > 0) {
	std::cout << "Gimme five you Frag!" << std::endl;
	}
	else {
		std::cout << "Can't high 5 dude, I am DEAD AF" << std::endl;
	}
}
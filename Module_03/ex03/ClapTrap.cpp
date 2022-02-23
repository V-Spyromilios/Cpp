#include "ClapTrap.hpp"


ClapTrap::ClapTrap() {
	this-> _hPoints = 10;
	this-> _ePoints = 10;
	this-> _aDamage = 0;
	std::cout << "ClapTrap void Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this-> _hPoints = 10;
	this-> _ePoints = 10;
	this-> _aDamage = 0;
	this-> _name = name;
	std::cout << "ClapTrap 'name' Constructor called" << std::endl;
}


ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

//gets MUST be const in overloaders. lvalues must
// be used with const. lvalue: its evaluation determines the identity of the object.
ClapTrap& ClapTrap::operator=(ClapTrap const & src) {
	if (this != &src) {
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setEP(src.getEP());
		this->setAD(src.getAD());
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->getHP() <= 0) {
		std::cout << "I'm already dead" << std:: endl;
		return ;
	}
	if (this->getEP() < 1) {
		std::cout << "I am too tired to do anything right now" << std::endl;
	}
	else {
		int temp = this->getEP();
		this->setEP(temp--);
		std::cout << "ClapTrap " << this->getName() << " attacks "  << target 
	<< ","<< " causing " << this->getAD() << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->setHP(this->getHP() - amount);
	if (this->getHP() <= 0) {
		std::cout << "Flawless Victory" << std::endl;
		return ;
	}
	std::cout << "Aaah! You just caused me " << amount
	<< " points of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->getEP() > 0 && this->getHP() > 0 && (this->getHP() + amount < MAX_HP)) {
		this->setEP(this->getEP() - 1);
		this->setHP(this->getHP() + amount);
		if (this->getHP() > 10) {
			this->setHP(10);
			std::cout << "Wow, superBoosted, Max Health Points: "
			<< this->getHP() << std::endl;
		}
		std::cout << "Im feeling like " << amount 
		<< "points better :)" << std::endl;
	}
	else if (this->getHP() + amount > MAX_HP) {
		this->setEP(MAX_HP);
		std::cout << "Can not have more than: " << MAX_HP << " health points." << std::endl;
	}
	else if (this->getHP() == MAX_HP) {
		std::cout << "I'm feeling good, no need for repair" << std::endl;
	}
	else if(this->getHP() <= 0) {
		std::cout << "Im already dead" << std::endl;
		return ;
	}
	else if (this->getEP() <= 0){
		std::cout << "No energy left to be repaired..." << std::endl;
	}
}

//Setters
void ClapTrap::setName(std::string name) {
	this->_name = name;
}
void			ClapTrap::setHP(int health) {
	this->_hPoints = health;
}
void			ClapTrap::setEP(int energy) {
	this->_ePoints = energy;
}

void			ClapTrap::setAD(int attack) {
	this->_aDamage = attack;
}

//Getters
std::string	ClapTrap::getName() const {
	return (this->_name);
}

int	ClapTrap::getAD() const{
	return (this->_aDamage);
}

int	ClapTrap::getEP() const{
	return (this->_ePoints);
}

int	ClapTrap::getHP() const{
	return (this->_hPoints);
}

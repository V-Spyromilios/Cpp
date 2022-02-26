#include "CatClass.hpp"

CatClass::CatClass() {
	std::cout << "Void Cat Constructor called" << std::endl;
}

CatClass::CatClass(CatClass const &src) {
		*this = src;
		std::cout << "Copy Cat Constructor called" << std::endl;
}

CatClass::CatClass(std::string name) {
	this->type = name;
	std::cout << "Name Cat Constructor called" << std::endl;
}

CatClass&  CatClass::operator=(CatClass const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

CatClass::~CatClass() {
	std::cout << "Cat Destructor called" << std::endl;
}

void	CatClass::setType(std::string type) {
	this->type = type;
}

std::string CatClass::getType() const {
	return (this->type);
}

void	CatClass::makeSound(void) const {
	std::cout << "I am a Cat !" << std::endl;
}

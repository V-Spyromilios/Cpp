#include "AnimalClass.hpp"

AnimalClass::AnimalClass() {
	std::cout << "Void Animal Constructor called" << std::endl;
}

AnimalClass::AnimalClass(AnimalClass const &src) {
		*this = src;
		std::cout << "Copy Animal Constructor called" << std::endl;
}

AnimalClass::AnimalClass(std::string name): type(name) {
	std::cout << "Name Animal Constructor called" << std::endl;
}

AnimalClass&  AnimalClass::operator=(AnimalClass const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

AnimalClass::~AnimalClass() {
	std::cout << "Animal Destructor called" << std::endl;
}

void	AnimalClass::setType(std::string type) {
	this->type = type;
}

std::string AnimalClass::getType() const {
	return (this->type);
}

void	AnimalClass::makeSound(void) const {
	std::cout << "I am the Parent Animal !" << std::endl;
}

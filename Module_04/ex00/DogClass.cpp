#include "DogClass.hpp"

DogClass::DogClass() {
	std::cout << "Void Dog Constructor called" << std::endl;
}

DogClass::DogClass(DogClass const &src) {
		*this = src;
		std::cout << "Copy Dog Constructor called" << std::endl;
}

DogClass::DogClass(std::string name) {
	this->type = name;
	std::cout << "Name Dog Constructor called" << std::endl;
}

DogClass&  DogClass::operator=(DogClass const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

DogClass::~DogClass() {
	std::cout << "Dog Destructor called" << std::endl;
}

void	DogClass::setType(std::string type) {
	this->type = type;
}

std::string DogClass::getType() const {
	return (this->type);
}

void	DogClass::makeSound(void) const {
	std::cout << "I am a Dog !" << std::endl;
}

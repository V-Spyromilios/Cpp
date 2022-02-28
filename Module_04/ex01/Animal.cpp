#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Void Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
		*this = src;
		std::cout << "Copy Animal Constructor called" << std::endl;
}

Animal::Animal(std::string name): type(name) {
	std::cout << "Name Animal Constructor called" << std::endl;
}

Animal&  Animal::operator=(Animal const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::setType(std::string type) {
	this->type = type;
}

std::string Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound(void) const {
	std::cout << "I am the Parent Animal !" << std::endl;
}

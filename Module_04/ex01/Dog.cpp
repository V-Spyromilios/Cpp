#include "Dog.hpp"

Dog::Dog() {
	this->brain = new Brain();

	std::cout << "Void Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
		*this = src;
		std::cout << "Copy Dog Constructor called" << std::endl;
}

Dog::Dog(std::string name) {
	this->type = name;
	std::cout << "Name Dog Constructor called" << std::endl;
}

Dog&  Dog::operator=(Dog const &src) {
	if (this != &src) {
		this->type = src.type;
		this->brain = new Brain();
		std::copy(src.brain, src.brain + 100, this->brain);
	}
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destructor called & brain deleted" << std::endl;
}

void	Dog::setType(std::string type) {
	this->type = type;
}

std::string Dog::getType() const {
	return (this->type);
}

void	Dog::makeSound(void) const {
	std::cout << "I am a Dog !" << std::endl;
}

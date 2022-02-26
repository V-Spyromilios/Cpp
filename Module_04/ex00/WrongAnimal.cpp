#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Void Wrong Animal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
		*this = src;
		std::cout << "Copy Wrong Animal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): type(name) {
	std::cout << "Name Wrong Animal Constructor called" << std::endl;
}

WrongAnimal&  WrongAnimal::operator=(WrongAnimal const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal Destructor called" << std::endl;
}

void	WrongAnimal::setType(std::string type) {
	this->type = type;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "I am the Wrong  <Parent> Animal !" << std::endl;
}

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Void Wrong Cat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) {
		*this = src;
		std::cout << "Copy Wrong Cat Constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) {
	this->type = name;
	std::cout << "Name Wrong Cat Constructor called" << std::endl;
}

WrongCat&  WrongCat::operator=(WrongCat const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat Destructor called" << std::endl;
}

void	WrongCat::setType(std::string type) {
	this->type = type;
}

std::string WrongCat::getType() const {
	return (this->type);
}

void	WrongCat::makeSound(void) const {
	std::cout << "I am the Wrong Cat, my Parent is Wrong Animal !" << std::endl;
}

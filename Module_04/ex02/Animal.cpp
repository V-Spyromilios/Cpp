#include "Animal.hpp"

A_animal::A_animal() {
	std::cout << "Void A_animal Constructor called" << std::endl;
}

A_animal::A_animal(A_animal const &src) {
		*this = src;
		std::cout << "Copy A_animal Constructor called" << std::endl;
}

A_animal::A_animal(std::string name): type(name) {
	std::cout << "Name A_animal Constructor called" << std::endl;
}

A_animal& A_animal::operator=(A_animal const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

A_animal::~A_animal() {
	std::cout << "A_animal Destructor called" << std::endl;
}

void	A_animal::setType(std::string type) {
	this->type = type;
}

std::string A_animal::getType() const {
	return (this->type);
}

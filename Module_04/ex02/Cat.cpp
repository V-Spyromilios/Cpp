#include "Cat.hpp"

Cat::Cat() {
	this->brain = new Brain();
	this->type = "Cat";
	
	std::cout << "Void Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const &src) { //google this
		*this = src;
		std::cout << "Copy Cat Constructor called" << std::endl;
}

Cat&  Cat::operator=(Cat const &src) {
	if (this != &src) {
		this->type = src.type;
		std::copy(src.brain, src.brain + 100, this->brain);
	}
	return (*this);
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat Destructor called & brain deleted" << std::endl;
}

void	Cat::setType(std::string type) {
	this->type = type;
}

std::string Cat::getType() const {
	return (this->type);
}

void	Cat::makeSound(void) const {
	std::cout << "I am a Cat !" << std::endl;
}

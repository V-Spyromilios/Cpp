#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Constuctor called" << std::endl;
}

Brain::Brain(Brain const &src) {
	*this = src;
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &src) {
	if (this != &src) {
		std::copy(src.getIdeas(), src.getIdeas() + 100, this->ideas);
	}
	std::cout << "Brain Assignment Operator called" << std::endl;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << std::endl;
}

const std::string* Brain::getIdeas() const{
	return this->ideas;
}
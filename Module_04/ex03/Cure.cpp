#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout << "Cure Void Constructor called" << std::endl;
}

Cure::Cure(std::string name): AMateria(name) {
	std::cout << "Cure Name Constructor called" << std::endl;
}

Cure::Cure(Cure const &src): AMateria(src) {
	std::cout << "Cure Copy Constructor called" << std::endl;
}

Cure& Cure::operator=(Cure const &src) {
	if (this != &src) {
		this->type = src.type;
	}
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure Destructor called" << std::endl;
}

void	Cure::setType(std::string type) {
	this->type = type;
}

Cure* Cure::clone() const{
	Cure *c = new Cure();
	return (c);
}

void 	Cure::use(ICharacter &target) {
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
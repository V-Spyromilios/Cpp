#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): type(type) {
	std::cout << "AMateria Type Constructor called" << std::endl;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void use(ICharacter &target) {
	if (target.getName() == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else {
		std::cout << "* heals " << target.getName() <<  "’s wounds *" << std::endl;
	}
}
#include "AMateria.hpp"

AMateria::AMateria(): _type("") {
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type) {
	std::cout << "AMateria Type Constructor called" << std::endl;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

//Non pure virtuals must provide implementation on Parent.cpp before overwriten
void use(ICharacter &target) {
	(void)target;
}

AMateria &AMateria::operator=(AMateria const &src) {
	if (this != &src) {
		this->_type = src.getType();
	}
	std::cout << "AMateria operator called" << std::endl;
	return *this;
}
#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice Void Constructor called" << std::endl;
}

Ice::Ice(std::string const &name): AMateria(name) {
	std::cout << "Ice Name Constructor called" << std::endl;
}

Ice::Ice(Ice const &src): AMateria(src) {
	std::cout << "Ice Type Constructor called" << std::endl;
}

Ice& Ice::operator=(Ice const &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice Destructor called" << std::endl;
}

void	Ice::setType(std::string type) {
	this->_type = type;
}

AMateria* Ice::clone() const{
	Ice *c = new Ice("ice");
	return (c);
}

void AMateria::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}


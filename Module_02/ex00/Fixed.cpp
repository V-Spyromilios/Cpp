#include "Fixed.hpp"

Fixed::Fixed(void): _storage(0) {
	std::cout << "Default Constructor Called" << std::endl;

}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this= src;

}

Fixed& Fixed::operator=(Fixed const &src) {
	if (this != &src) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_storage = src.getRawBits();
	}
	return (*this);

}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_storage;

}

Fixed::~Fixed(void) {
	std::cout << "Destructor Called" << std::endl;
}






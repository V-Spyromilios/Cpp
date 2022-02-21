#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void): _storage(0) {
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float f) {
	std::cout<< "Float constructor called" << std::endl;
	this->_storage = roundf(f * (1 << this->_bits));
}
Fixed::Fixed(const int i) {
	std::cout<< "Int constructor called" << std::endl;
	this->_storage = i * (1 << this->_bits);
}

Fixed& Fixed::operator=(Fixed const &src) {
	if (this != &src) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_storage = src.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_storage;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor Called" << std::endl;
}

void	Fixed::setRawBits(int const raw) {
	this->_storage = raw;
}

float 	Fixed::toFloat(void) const {
    return ((double)this->getRawBits() / (float)(1 << this->_bits));
}

int		Fixed::toInt(void) const {
	return (this->getRawBits() / (1 << this->_bits));
}

std::ostream& operator<<(std::ostream &stream, Fixed const &ref) {
	return (stream << ref.toFloat());
}


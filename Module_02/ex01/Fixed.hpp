#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:

	Fixed();
	Fixed(Fixed const &src);
	Fixed(const float f);
	Fixed(const int i);
	Fixed &operator=(Fixed const &src);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float 	toFloat(void) const;
	int		toInt(void) const;

private:

	int		_storage;
	static const int _bits;

};

std::ostream& operator<<(std::ostream &stream, Fixed const &ref);

#endif
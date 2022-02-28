#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:

	Fixed();
	Fixed &operator=(Fixed const &src);
	Fixed(Fixed const &src);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int				_storage;
	static const int _bits;

};
#endif
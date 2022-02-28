#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
//#include <cmath>

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

	bool operator>(Fixed const &ref) const ;
	bool operator>=(Fixed const &ref) const ;
	bool operator<(Fixed const &ref) const ;
	bool operator<=(Fixed const &ref) const ;
	bool operator==(Fixed const &ref) const ;
	bool operator!=(Fixed const &ref) const ;

	Fixed operator+(Fixed const &ref) const;
	Fixed operator-(Fixed const &ref) const;
	Fixed operator*(Fixed const &ref) const;
	Fixed operator/(Fixed const &ref) const;

	Fixed& operator++(void);
	Fixed& operator--(void);

	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed &r1, Fixed &r2);
	static Fixed& max(Fixed &r1, Fixed &r2);

	static const Fixed& min(Fixed const &f1, Fixed const &f2);
	static const Fixed& max(Fixed const &f1, Fixed const &f2);

private:

	int		_storage;
	static const int _bits;
};

std::ostream& operator<<(std::ostream &stream, Fixed const &ref);

#endif
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:

	WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat(std::string name);
	WrongCat &operator=(WrongCat const &src);
	~WrongCat();

	void		setType(std::string type);
	std::string getType() const;

	void	makeSound(void) const;

};

#endif
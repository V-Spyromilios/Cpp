#ifndef DOGCLASS_HPP
#define DOGCLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"

class DogClass: public AnimalClass {
public:

	DogClass();
	DogClass(DogClass const &src);
	DogClass(std::string name);
	DogClass &operator=(DogClass const &src);
	~DogClass();

	void		setType(std::string type);
	std::string getType() const;

	void		makeSound(void) const;

};

#endif
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:

	Animal();
	Animal(Animal const &src);
	Animal(std::string name);
	Animal &operator=(Animal const &src);
	virtual ~Animal();

	void		setType(std::string type);
	std::string getType() const;

	virtual void		makeSound(void) const;

protected:

	std::string type;
};

#endif
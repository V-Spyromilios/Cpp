#ifndef ANIMALCLASS_HPP
#define ANIMALCLASS_HPP

#include <iostream>

class AnimalClass {
public:

	AnimalClass();
	AnimalClass(AnimalClass const &src);
	AnimalClass(std::string name);
	AnimalClass &operator=(AnimalClass const &src);
	virtual ~AnimalClass();

	void		setType(std::string type);
	std::string getType() const;

	virtual void		makeSound(void) const;

protected:

	std::string type;
};

#endif
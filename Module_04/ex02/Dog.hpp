#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public A_animal {
public:

	Dog();
	Dog(Dog const &src);
	Dog(std::string name);
	Dog &operator=(Dog const &src);
	~Dog();

	void		setType(std::string type);
	std::string getType() const;

	virtual void		makeSound(void) const;
	std::string 		getIdeas();

private:

	Brain *brain;
};

#endif
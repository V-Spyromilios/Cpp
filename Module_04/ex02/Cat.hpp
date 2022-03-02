#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public A_animal {
public:

	Cat();
	Cat(Cat const &src);
	Cat(std::string name);
	Cat &operator=(Cat const &src);
	~Cat();

	void		setType(std::string type);
	std::string getType() const;

	void		makeSound(void) const;  //'virtual' to be inhereted bu others

private:

	Brain *brain;

};

#endif
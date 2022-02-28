#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class A_animal {
public:

	A_animal();
	A_animal(A_animal const &src);
	A_animal(std::string name);
	A_animal &operator=(A_animal const &src);
	virtual ~A_animal();

	void		setType(std::string type);
	std::string getType() const;

	virtual void		makeSound(void) const =0;

protected:

	std::string type;
};

#endif
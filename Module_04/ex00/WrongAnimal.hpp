#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal(std::string name);
	WrongAnimal &operator=(WrongAnimal const &src);
	~WrongAnimal();

	void		setType(std::string type);
	std::string getType() const;

	void	makeSound(void) const;

protected:

	std::string type;
};

#endif
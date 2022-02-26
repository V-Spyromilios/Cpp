#ifndef CATCLASS_HPP
#define CATCLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"

class CatClass: public AnimalClass {
public:

	CatClass();
	CatClass(CatClass const &src);
	CatClass(std::string name);
	CatClass &operator=(CatClass const &src);
	~CatClass();

	void		setType(std::string type);
	std::string getType() const;

	void		makeSound(void) const;

};

#endif
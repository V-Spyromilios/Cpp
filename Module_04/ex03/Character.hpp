#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"

class Character: public ICharacter {

private:
	std::string 	_name;
	AMateria 		**_materia;

public:
	Character();
	Character(const char *name);
	~Character();
	Character(Character const & src);
	Character & operator=(Character const & rhs);

	std::string const & getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);
	AMateria*			getMateria(int i);

};


#endif
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"

class Character: public ICharacter {
public:

	Character();
	Character(std::string const &type);
	Character &operator=(Character const &src);
	Character(Character const &src);
	~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	void 		setName(std::string name);
	void		deleteSlots(AMateria** materia);

private:

	std::string _name;
	AMateria *_slots[4];

};


#endif
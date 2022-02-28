#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


Character::Character(): _name("") {
	for (int c =0; c < 4; c++) {    // :-)
		this->_slots[c] = NULL;
	}
	std::cout << "Character Void Constructor called" << std::endl;
}

Character::Character(std::string const &type): _name(type) {
	for (int c =0; c < 4; c++) {
		this->_slots[c] = NULL;
	}
	std::cout << "Character Type Constructor called" << std::endl;
}

Character::Character(Character const & src) {
	*this = src;
}

Character& Character::operator=(Character const &src) {
	if (this != &src) {
		this->_slots[0] = src._slots[0];
		this->_slots[1] = src._slots[1];
		this->_slots[2] = src._slots[2];
		this->_slots[3] = src._slots[3];
	}
	return (*this);
}

void	Character::deleteSlots(AMateria** materia)
{
	int i = 0;
	while (i < 3)
	{
		if (materia[i])
			delete (materia[i]);
		i++;
	}
	delete[] materia;
}

Character::~Character() {
	int i = 0;
	while (i < 3)
	{
		if (_slots[i])
			delete (_slots[i]);
		i++;
	}
	deleteSlots(_slots);
	std::cout << "Character Destructor called" << std::endl;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::setName(std::string name) {
	this->_name = name;
}

void Character::equip(AMateria* m) {
	if (!m) {
		std::cout << "AMateria not valid for 'equip'" << std::endl;
		return ;
	}
	for (int steps = 0; steps < 4; steps++) {
		if (steps == 0 && this->_slots[steps] == NULL) {
			this->_slots[steps] = m;
			steps++;
		}
		if (steps == 0)
			std::cout << "No free space" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (this->_slots[idx] == NULL)
		std::cout << "inventory empty." << std::endl;
	else
		this->_slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (this->_slots[idx] == NULL || idx < 0 || idx > 3) {
		std::cout << "There is nothing here" << std::endl;
	}
	else {
		this->_slots[idx]->use(target);
		this->_slots[idx] = NULL;
	}
}

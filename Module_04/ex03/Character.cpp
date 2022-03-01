#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : _name("Character"), _materia(new AMateria*[4]()){

}

Character::Character(const char *name) : _name(name), _materia(new AMateria*[4]()){

}

Character::~Character() {
	int i = 0;
	while (i < 3)
	{
		if (_materia[i])
			delete (_materia[i]);
		i++;
	}
	delete[] (_materia);
}

Character::Character(const Character &src) {

	this->_materia = new AMateria*[4]();
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

void	deleteMateria(AMateria** materia)
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

Character &Character::operator=(const Character &rhs) {
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		if (this->_materia) {
			deleteMateria(this->_materia);
		}
		AMateria **materialNew = new AMateria*[4];
		int i = 0;
		while (i < 3)
		{
			if (rhs._materia[i])
				materialNew[i] = rhs._materia[i]->clone();
			else
				materialNew[i] = NULL;
			i++;
		}
		this->_materia = materialNew;
	}
	std::cout << "Character Assignation Operator called" << std::endl;
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (!m)
	{
		std::cout << "The Materia to equip is not valid." << std::endl;
		return;
	}
	int i = 0;
	while (this->_materia[i])
	{
		if (!this->_materia[i])
			break;
		i++;
	}
	if (i == 3 && this->_materia[i])
	{
		std::cout << "The inventory is full." << std::endl;
		return;
	}
	std::cout << "Equiped" << std::endl;
	this->_materia[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && this->_materia[idx])
	{
		this->_materia[idx] = NULL;
		std::cout << "Materia " << idx << " unequipped." << std::endl;
	}
	else
		std::cout << "Please provide valid materia." << std::endl;
}

void Character::use(int idx, ICharacter &target) {

	AMateria *materiaUse = this->getMateria(idx);
	if (materiaUse && (!materiaUse->getType().compare("ice") || !materiaUse->getType().compare("cure")))
		materiaUse->use(target);
	else
	{
		std::cout << "Error on use()" << std::endl;
		delete materiaUse;
	}
}

AMateria *Character::getMateria(int i) {
	return this->_materia[i];
}
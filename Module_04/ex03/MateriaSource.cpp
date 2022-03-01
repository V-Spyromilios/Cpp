#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() {
	_materia[0] = NULL;
	_materia[1] = NULL;
	_materia[2] = NULL;
	_materia[3] = NULL;
}

MateriaSource::~MateriaSource() {
//	int i = 0;
//	while (this->_materia[i] && i < 3)
//	{
//		delete (this->_materia[i]);
//		i++;
//	}
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	*this = src;
	std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	if (this != &rhs)
	{
		this->_materia[0] = rhs._materia[0];
		this->_materia[1] = rhs._materia[1];
		this->_materia[2] = rhs._materia[2];
		this->_materia[3] = rhs._materia[3];
	}
	std::cout << "MateriaSource copy constructor called." << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {

	if (materia->getType().compare("ice"))
	{
		AMateria *materiaCopy = new Ice();
		int i = 0;
		while (this->_materia[i])
			i++;
		if (i == 3)
		{
			std::cout << "There are already 4 materials..." << std::endl;
			return;
		}
		this->_materia[i] = materiaCopy;
	}
	else if (materia->getType().compare("cure"))
	{
		AMateria *materiaCopy = new Cure();
		int i = 0;
		while (this->_materia[i])
			i++;
		if (i == 3)
		{
			std::cout << "There are already 4 materials..." << std::endl;
			return;
		}
		this->_materia[i] = materiaCopy;
	}
	delete materia;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	int i = 0;
	while (this->_materia[i])
	{
		if (!this->_materia[i]->getType().compare(type))
			return this->_materia[i];
		i++;
	}
	return NULL;
}
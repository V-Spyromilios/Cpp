#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP

#include "IMateriaSource.hpp"
class MateriaSource: public IMateriaSource {

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator=(MateriaSource const & rhs);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *_materia[4];
};

#endif
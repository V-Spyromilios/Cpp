#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"


class AMateria {

public:

AMateria();
virtual ~AMateria();
AMateria(std::string const &type);

std::string const	&getType() const; //Returns the materia type
virtual AMateria* 	clone() const = 0;
virtual void 		use(ICharacter &target);
AMateria& operator=(AMateria const &src);

protected:
	std::string _type;

};

#endif
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
public:

	Cure();
	Cure(Cure const &src);
	Cure(std::string name);
	Cure& operator=(Cure const &src);
	~Cure();

	void	setType(std::string type);
	void 	use(ICharacter &target);
	Cure* 	clone() const;

};

#endif
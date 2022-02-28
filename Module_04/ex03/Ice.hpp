#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
public:

	Ice();
	Ice(Ice const &src);
	Ice(std::string const &name);
	Ice& operator=(Ice const &src);
	~Ice();

	void	setType(std::string type);

	AMateria* clone() const;

};

#endif
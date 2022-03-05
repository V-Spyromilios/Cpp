#ifndef CONVERTER_HPP
#define COVERTER_HPP

#include <sstream>
#include <iostream>

class Converter {

public:

	Converter();
	Converter(std::string input);
	Converter(Converter const &src);
	Converter& operator=(Converter const &src);
	~Converter();

	void	Convert(std::string in);

	bool	hasDot;
	bool	hasF;
};

#endif
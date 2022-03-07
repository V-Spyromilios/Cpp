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

	void 	Convert(std::string in);
	std::string 	get_input();
	void			set_input(std::string in); //? 

	bool		hasDot;
	bool		hasF;
	std::string input;
};

#endif
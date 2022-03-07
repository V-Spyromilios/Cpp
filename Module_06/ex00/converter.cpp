#include "converter.hpp"

Converter::Converter() {

}

Converter::Converter(std::string input) {

	this->input = input;
}

Converter::Converter(Converter const &src) {

	*this = src;
}

Converter& Converter::operator=(Converter const &src) {

	if (this != &src) {
			this->input = src.input;
		}
		return (*this);
}

Converter::~Converter() {

	std::cout << "Converter Destructor called." << std::endl;

}

void Converter::set_input(std::string in) {

	this->input = in;
}

std::string Converter::get_input() {

	return this->input;
}
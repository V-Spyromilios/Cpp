#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form() {

	std::cout << "ShrubberyCreationForm Void Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) {

	*this = src;
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("", 145, 137) {

	this->_target = target;
	std::cout << "ShrubberyCreationForm Target Constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &src) {

	if (this != &src) {
		this->_target = src._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm Destructor called" <<std::endl;
}

void		ShrubberyCreationForm::setTarget(std::string t) {

	this->_target = t;
}

std::string	ShrubberyCreationForm::getTarget() {

	return this->_target;
}
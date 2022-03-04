#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"


class ShrubberyCreationForm: public Form {

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm *src);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm&operator=(ShrubberyCreationForm const &src);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
	~ShrubberyCreationForm();

	int			getGradeSign();
	int			getGradeExe();
	void		setTarget(std::string t);
	std::string	getTarget();


	class GradeTooHighException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};

private:

	std::string _target;



};

#endif
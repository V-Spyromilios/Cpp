#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form();
	Form(Form const &src);
	Form(std::string form, int grToSign, int grToExe);
	Form& operator=(const Form &src);
	~Form();

	void			signForm();
	void			beSigned(Bureaucrat &ref);
	bool			is_Signed();
	int				getGradeSign();
	int				getGradeExe();
	std::string		getName();


	class GradeTooHighException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};


private:

	const std::string _name;
	bool		_isSigned;
	const int	_gradeSign;
	const int	_gradeExe;

};

#endif
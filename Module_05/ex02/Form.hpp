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
	virtual	int		getGradeSign() = 0;  //Pure 
	virtual int		getGradeExe() = 0;	//Pure 
	std::string		getName();

	class GradeTooHighException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};

	void		setGradeSign(int grade);
	void		setGradeExe(int grade);
	void		setName(std::string name);
	void		setSignature(bool signed);


private:

	const std::string _name;
	bool		_isSigned;
	const int	_gradeSign;
	const int	_gradeExe;
};

std::ostream& operator<<(std::ostream &stream, Form &f);

#endif
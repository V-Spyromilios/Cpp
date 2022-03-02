#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &src);
	~Bureaucrat();

	class GradeTooHighException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
		virtual	const char* what() const throw();
	};

	void		setGrade(int grade);
	int			getGrade() const;
	std::string getName() const;

	void	increment();
	void	decrement();
	void	signForm(Form &form);



private:

	int			_grade; 
	const std::string _name;
};

std::ostream& operator<<(std::ostream &stream, Bureaucrat const &ref);
#endif
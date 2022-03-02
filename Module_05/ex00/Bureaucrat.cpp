#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_grade(150), _name("Pasok")  {
	std::cout << "Void Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	try {
		if (grade > 150) {
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		else if (grade < 1) {
			this->_grade = 150;
			throw Bureaucrat::GradeTooHighException();
		}
		else {
			this->_grade = grade;
			std::cout << "Name-Grade Bureaucrat Constructor called" << std::endl;
		}
	}
	catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Grade Too Low");
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &src) {
	if (this != &src) {
		this->setGrade(src.getGrade());
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Destructor called" << std::endl;
}


std::ostream& operator<<(std::ostream &stream, Bureaucrat const &ref) {
	return (stream << ref.getName() << " , bureaucrat grade" << ref.getGrade());
}

void		Bureaucrat::setGrade(int grade) {
	this->_grade = grade;
}

int			Bureaucrat::getGrade() const {
	return this->_grade;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

void	Bureaucrat::increment() { //reduce rank!
	try {
		if (this->getGrade() - 1 < 1) {
			throw Bureaucrat::GradeTooHighException();
		}
		else {
			this->setGrade(_grade - 1);
		}
		}
		catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}


void	Bureaucrat::decrement() {
	try {
		if (this->getGrade() + 1 > 150) {
			throw Bureaucrat::GradeTooLowException();
		}
		else {
			this->setGrade(_grade + 1);
		}
		}
		catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}	

}
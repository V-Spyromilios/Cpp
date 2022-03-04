#include "Form.hpp"

Form::Form(): _name(""), _isSigned(false), _gradeSign(1), _gradeExe(1) {
	std::cout << "Void Form Constructor called" << std::endl;
}

Form::Form(Form const &src):_name(src._name), _isSigned(src._isSigned), _gradeSign(src._gradeSign), _gradeExe(src._gradeExe) {
	*this = src;
}

Form::Form(std::string form, int grToSign, int grToExe): _name(form), _isSigned(false), _gradeSign(grToSign), _gradeExe(grToExe) {
	try {
			if (this->getGradeExe() > 150 || this->getGradeSign() > 150) {
				throw Form::GradeTooLowException();
			}
			else if (this->getGradeExe() < 1 || this->getGradeExe() < 1) {
				throw Form::GradeTooHighException();
			}
		}
	catch(Form::GradeTooHighException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

Form& Form::operator=(const Form &src) {
	if (this != &src) {

	}
	return (*this);
}

Form::~Form() {
	std::cout << "Form Destructor called" << std::endl;
}

//Non Constructors:

void			Form::beSigned(Bureaucrat &ref) {
	std::cout << "Form is :" << this->_isSigned << std::endl;
	try {
		if (ref.getGrade() <= this->getGradeSign()) {
			this->_isSigned = true;
		}
		else {
			throw Form::GradeTooLowException();
		}
	}
	catch(Form::GradeTooLowException &e) {
			std::cout << "Exception: " << e.what() << std::endl;
	}
	ref.signForm(*this);
}

std::ostream&	operator<<(std::ostream &stream, Form &f) {
	if (f.is_Signed() == true) 
		return (stream << "Form \"" << f.getName() <<  "\" with Sign Grade " << f.getGradeSign() << " and Execution Grade " << f.getGradeExe() << " is signed" << std::endl);
	else 
		return (stream << "Form \"" << f.getName() <<  "\" with Sign Grade " << f.getGradeSign() << " and Execution Grade " << f.getGradeExe() << " is not signed." << std::endl);
}

bool			Form::is_Signed() {
	return this->_isSigned;
}

// int				Form::getGradeSign() {
// 	// return this->_gradeSign;
// }

// int				Form::getGradeExe() {
// 	// return this->_gradeExe;
// }

std::string		Form::getName() {
	return this->_name;
}


// Excemptions
const char* Form::GradeTooHighException::what(void) const throw() {
	return ("Grade Too High");
}

const char* Form::GradeTooLowException::what(void) const throw() {
	return ("Grade Too Low");
}


// Setters

void		Form::setGradeSign(int grade) {

	this->_gradeSign = grade;
}

void		Form::setGradeExe(int grade) {

	this->_gradeExe = grade;
}

void		Form::setName(std::string name) {

	this-> 
}
void		Form::setSignature(bool signed);
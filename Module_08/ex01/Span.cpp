#include "Span.hpp"

//CONSTRUCTORS
Span::Span(): _n(0) {
	//this->_vectoras = std::vector();
	std::cout << "Void Constructor called" << std::endl;
}

Span::Span(unsigned int N) {
	this->_n = N;
	// for (unsigned int i = 0; i < N; i++)
	// 	this->_vectoras.push_back(i);
}

Span::Span(Span const &src) {
	if (!this->_vectoras.empty())
		this->_vectoras.clear();
	//if (src.getN() > 0) 
		//this->_vectoras = new std::vector<int>();
	for (int c = 0; c < src.getN(); c++) {
		this->_vectoras.push_back(src._vectoras[c]);
		
	}
	this->_n = src.getN();
}

Span::~Span() {
	this->_vectoras.clear();
}

//OPERATOR
Span& 	Span::operator=(Span const &src) {
	if (!this->_vectoras.empty())
		this->_vectoras.clear();
	if (src.getN() > 0) {
		this->_n = src.getN();
		// this->_vectoras = std::vector<int>(src.getN());
		for (unsigned int i = 0; i < this->_n; i++) {
			this->_vectoras.push_back(src._vectoras[i]);
		}
	}
	return (*this);

}

//MEMBER FUNCTIONS
void	Span::addNumber(int i) {
	try {
	if ((unsigned long)this->getN() > this->_vectoras.size()) {
		this->_vectoras.push_back(i);
	}
	else { throw Span::OutOfBound(); }	//std::cout << "Number added to Vector" << std::endl;
	}
	catch (Span::OutOfBound &e) {
		std::cout << "Exception caught:" << e.what() << std::endl;
	}
}

void		Span::shortestSpan() const{

}

void		Span::longestSpan() const{

}

int		Span::getN() const{
	return this->_n;
}

void		Span::printVector() {
	std::vector<int>::const_iterator it;
	for ( it = this->_vectoras.begin(); it != this->_vectoras.end(); ++it	)
		std::cout << *it << " " << std::endl;
}

void	Span::addMany(int start, int end) {
	for (int i = start; i < end; i++) {
		try {
		addNumber(i);
		}

	catch (Span::OutOfBound &e) {
		std::cout << "Exception caught:" << e.what() << std::endl;
	}
	}
}

const char *	Span::OutOfBound::what() const throw() {
	return (" Check Vector Size");
}
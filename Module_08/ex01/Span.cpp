#include "Span.hpp"

//CONSTRUCTORS
Span::Span(): _limit(0) {
}

Span::Span(unsigned int N) {
	try {
	if (this->_vectoras.max_size() >= N)
		this->_limit = N;
	else { throw OutOfMemory(); }
	}
	catch (Span::OutOfMemory &e) {
		std::cout << "WTF?" << e.what() << std::endl;
		return ; 
	}
}

Span::Span(Span const &src) {
	*this = src;
	// if (src.getN() > 0) {
	// for (unsigned long c = 0; c < src.getN(); c++)
	// 	this->_vectoras.push_back(src._vectoras[c]);
	// }
	// this->_limit = src.getN();
}

Span::~Span() {
	this->_vectoras.clear();
}

//OPERATOR
Span& 	Span::operator=(Span const &src) {
	if (this != &src) {
		if (!this->_vectoras.empty())
			this->_vectoras.clear();
		if (src.getN() > 0) {
			this->_limit = src.getN();
			for (unsigned int i = 0; i < this->_limit; i++)
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
	else { throw Span::OutOfBound(); }
	}
	catch (Span::OutOfBound &e) {
		std::cout << "WTF?" << e.what() << std::endl;
		return ;
	} 
}

unsigned long	Span::getN() const{
	return this->_limit;
}

void		Span::printVector() const{
	std::vector<int>::const_iterator it;
	for (it = this->_vectoras.begin(); it != this->_vectoras.end(); ++it)
		std::cout << *it << " ";
	std::cout<<std::endl;
}

void	Span::addMany(int x) {
	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		try {
		int r = rand() % (100 + 1 - 0);
		if (this->_vectoras.size() < this->getN() )
		this->_vectoras.push_back(r);
		else  { throw Span::OutOfBound(); }
		}
		catch (Span::OutOfBound &e) {
			std::cout << "WTF?" << e.what() << std::endl;
			return ;
		}
	}
}


int		Span::shortestSpan() const{
	try {
		if (this->_vectoras.size() < 2) {
		throw Span::SpanImpossible();
		}
		int span = std::abs(this->_vectoras[0] - this->_vectoras[1]);
		for (unsigned int i = 0; i < this->_vectoras.size(); i++) {
			for (unsigned int j = i + 1; j < this->_vectoras.size(); j++) {
				if (std::abs(this->_vectoras[i] - this->_vectoras[j]) < span)
					span = std::abs(this->_vectoras[i] - this->_vectoras[j]);

				}
			}
		return span;
		}
	catch (Span::SpanImpossible &e) {
		std::cout << "WTF? " << e.what() << std::endl;
		return (-1);
	}
}

int		Span::longestSpan() const{
	try {
		if (this->_vectoras.size() < 2) {
		throw Span::SpanImpossible();
		}
		int span = std::abs(this->_vectoras[0] - this->_vectoras[1]);
		for (unsigned int i = 0; i < this->_vectoras.size(); i++) {
			for (unsigned int j = i + 1; j < this->_vectoras.size(); j++) {
				if (std::abs(this->_vectoras[i] - this->_vectoras[j]) > span)
					span = std::abs(this->_vectoras[i] - this->_vectoras[j]);

				}
			}
		return span;
		}
	catch (Span::SpanImpossible &e) {
		std::cout << "WTF? " << e.what() << std::endl;
		return (-1);
	}
}

// EXEPTIONS
const char *	Span::OutOfBound::what() const throw() {
	return (" Check Vector Size");
}

const char *	Span::OutOfMemory::what() const throw() {
	return ("Not enough System Memory");
}
const char *	Span::SpanImpossible::what() const throw() {
	return ("Span requires minimum vector length: 2");
}
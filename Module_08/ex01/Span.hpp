#pragma once
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>

class Span {
public:

	Span();
	Span(unsigned int N);
	Span(Span const &src);
	~Span();

	Span&	operator=(Span const &src);
	void	addNumber(int i);
	int		shortestSpan() const;
	int		longestSpan() const;
	void	printVector() const;
	void	addMany(int x);
	unsigned long	getN() const;

	class OutOfBound: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class OutOfMemory: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class SpanImpossible: public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:

	std::vector<int> 	_vectoras;
	unsigned long		_limit;

};

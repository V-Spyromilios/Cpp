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
	void	shortestSpan() const;
	void	longestSpan() const;
	int		getN() const;
	void	printVector();
	void	addMany(int start, int end); // [)

	class OutOfBound: public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:

	std::vector<int> 	_vectoras;
	unsigned int		_n;

};

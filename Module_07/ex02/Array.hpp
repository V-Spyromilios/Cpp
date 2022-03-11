#pragma once
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename VW>
class Array {
public:

	Array();
	Array(unsigned int n);
	Array(Array<VW> const &src);
	~Array();

	Array&		operator=(Array<VW> const &src);
	VW& 		operator[](unsigned int i);
	VW const & 	operator[](unsigned int i) const;

	class OutOfBounds: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	unsigned int size() const;

private:

	VW* _array;
	unsigned int _size;
};

#include "Array.tpp"

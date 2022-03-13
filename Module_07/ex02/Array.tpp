#include "Array.hpp"

/* CONSTRUCTORS */

template<typename VW>
Array<VW>::Array(): _array(nullptr), _size(0) {
	std::cout << "Void Constructor called" << std::endl;
}

template<typename VW>
Array<VW>::Array(unsigned int n): _array(nullptr), _size(n) {
	this->_array = new VW[n]();
}

template<typename VW>
Array<VW>::Array(Array<VW> const &src): _array(nullptr), _size(src.size()) {
	if (src._size > 0) {
		this->_array = new VW[src.size()]();
		for (unsigned int j = 0; j < src.size(); j++) {
			this->_array[j] = src._array[j];
		}
		this->_size = src.size();
	}
}

template<typename VW>
Array<VW>::~Array(void) {
	if (this->_size > 0)
		delete [] this->_array;
}

template<typename VW>
Array<VW>& Array<VW>::operator=(Array<VW> const &src) {
	if (this->_array)
		delete[] this->_array;
	this->_array = nullptr;
	if (src.size() > 0) {
		this->_array = new VW[src._size]();
		for (unsigned int c = 0; c < src.size(); c++) {
			this->_array[c] = src._array[c];
		}
	}
	this->_size = src.size();
	return (*this); // a = b
}

template<typename VW>
VW& Array<VW>::operator[](unsigned int i) {
	if (i > this->_size)
		throw Array::OutOfBounds();
	return (this->_array[i]);
}

template<typename VW>
VW const & Array<VW>::operator[](unsigned int i) const {
	if (i > this->_size)
		throw Array::OutOfBounds();
	return (this->_array[i]);
	//return (operator[](i)); Calls the above
}

template<typename VW>
unsigned int 	Array<VW>::size() const{
	return this->_size;
}


template<typename VW>
const char *	Array<VW>::OutOfBounds::what() const throw() {
	return ("Exception:: i > Array::_size");
}
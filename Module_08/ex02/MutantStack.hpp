#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>

template 
class MutantStack: public class deque {
public:

	MutantStack();
	MutantStack(MutantStack const &src);
	operator=(MutantStack const &src);
	~MutantStack();


};

#endif
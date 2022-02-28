#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
public:

	Brain();
	Brain(Brain const &src);
	Brain& operator=(Brain const &src);
	~Brain();

	const std::string* getIdeas() const;

private:

	std::string  ideas[100];

};
#endif
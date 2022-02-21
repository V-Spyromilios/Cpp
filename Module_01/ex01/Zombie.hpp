#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie();
	void			announce(void);
	Zombie(std::string name);
	~Zombie();
	void	setname(std::string name);

private:
	std::string _name;
};
Zombie	*zombieHorde(int N, std::string name);
#endif
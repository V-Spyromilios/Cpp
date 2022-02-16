#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie();
	void	announce(void);
	Zombie	*newZombie(std::string name);
	Zombie(std::string name);
	~Zombie();
	Zombie	*zombieHorde(int N, std::string name);


private:
	std::string _name;
};

#endif
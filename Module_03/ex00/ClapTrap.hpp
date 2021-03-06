#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define MAX_HP 10
#define MAX_EP 10
#define MAX_AD 0

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap&	 operator=(ClapTrap const & src) ;
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string getName() const;
	int			getHP() const;
	int			getEP() const;
	int			getAD() const;


private:

	std::string _name;
	int	_hPoints;
	int _ePoints;
	int _aDamage;

};

#endif
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define MAX_HP 100
#define MAX_EP 50
#define MAX_AD 30

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

	void		setName(std::string name);
	std::string getName() const;
	int			getHP() const;
	int			getEP() const;
	int			getAD() const;

	void		setHP(int health);
	void		setEP(int energy);
	void		setAD(int attack);


protected:

	std::string _name;
	int	_hPoints;
	int _ePoints;
	int _aDamage;

};

#endif
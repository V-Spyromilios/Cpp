#include "Karen.hpp"

enum levels {edebug, einfo, ewarning, eerror, eee};

levels hashit (std::string const &level) {
	if (level == "DEBUG") {return edebug;}
	if (level == "INFO") {return einfo;}
	if (level == "WARNING") {return ewarning;}
	if (level == "ERROR") {std::cout << eerror << std::endl; return eerror;}
	else {return eee;}
}

void    Karen::complain(std::string level) {
	pointer pt1 = {&Karen::debug};
	pointer pt2 = {&Karen::info};
	pointer pt3 = {&Karen::warning};
	pointer pt4 = {&Karen::error};

	switch (hashit(level))
	{
	case edebug:
		(this->*pt1)();
		(this->*pt2)();
		(this->*pt3)();
		(this->*pt4)();
		break ;
	case einfo:
		(this->*pt2)();
		(this->*pt3)();
		(this->*pt4)();
		break ;
	case ewarning:
		(this->*pt3)();
		(this->*pt4)();
		break ;
	case eerror:
		(this->*pt4)();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Karen::Karen() {

}

Karen::~Karen() {

}

void	Karen::debug(void) {
	std::cout << "[ DEBUG ]\n" <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- " <<
	"ketchup burger. I really do!" << std::endl << std::endl;
}

void	Karen::info(void) {
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. " << 
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl << std::endl;
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. " << 
	"I’ve been coming for years whereas you started working here since last month."
	<< std::endl << std::endl;
}

void	Karen::error(void) {
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." <<std::endl <<
	std::endl;
}

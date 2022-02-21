#include "Karen.hpp"

void    Karen::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	pointer ptr[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	//pointer pt = {&Karen::debug};
	for (int i = 0; i <= 3; i++) {
		if (levels[i] == level) {
			(this->*ptr[i])();
			//(this->*pt)();
		}
	}
}

Karen::Karen() {

}

Karen::~Karen() {

}

void	Karen::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- " <<
	"ketchup burger. I really do!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. " << 
	"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. " << 
	"I’ve been coming for years whereas you started working here since last month."
	<<std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

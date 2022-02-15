#include "includes.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::getfname(void) const
{
	return (this->_fname);
}

std::string Contact::getlname(void) const
{
	return (this->_lname);
}
std::string Contact::getnname(void) const
{
	return (this->_nname);
}

std::string Contact::getnumber(void) const
{
	return (this->_number);
}

std::string Contact::getsecret(void) const
{
	return (this->_secret);
}

void	Contact::setfname(std::string name)
{
	this->_fname = name;
}

void	Contact::setsname(std::string name)
{
	this->_lname = name;
}

void	Contact::setnname(std::string name)
{
	this->_nname = name;
}

void	Contact::setsecret(std::string secret)
{
	this->_secret = secret;
}

void	Contact::setnumber(std::string number)
{
	this->_number = number;
}
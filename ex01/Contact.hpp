#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "includes.hpp"

class Contact
{
	std::string _fname;
	std::string _lname;
	std::string _nname;
	std::string _secret;
	std::string _number;
	static int	_instances;

public:
	Contact();
	~Contact(void);
	void		setfname(std::string name);
	void		setsname(std::string last_name);
	void		setnname(std::string nick_name);
	void		setsecret(std::string secret);
	void		setnumber(std::string number);
	std::string getfname(void) const;
	std::string getlname(void) const;
	std::string getnname(void) const;
	std::string getnumber(void) const;
	std::string getsecret(void) const;
	//Contact(std::string name, std::string lname, std::string nname, std::string secret, std::string number);
};
#endif

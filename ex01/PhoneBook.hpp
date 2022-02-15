#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "includes.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	bool	saveContact(int *i, Contact *contact);
	bool	search(int *i);
	bool	add(int *i, Contact *c);
	std::string check_len(std::string str);
	bool	is_number(std::string phone_number);
	void	prompt_for_line(int *pos);
	void	full_contact(int i);
};

#endif
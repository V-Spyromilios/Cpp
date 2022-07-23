#include "includes.hpp"
#include <vector>

PhoneBook::~PhoneBook()
{
	return ;
}

PhoneBook::PhoneBook()
{
	return ;
}

bool	PhoneBook::saveContact(int *i, Contact *contact)
{
	std::string temp;
	int			j;

	j = *i % 8;
	temp = contact->getfname();
	PhoneBook::_contacts[j].setfname(temp);
	PhoneBook::_contacts[j].setsname(contact->getlname());
	PhoneBook::_contacts[j].setnname(contact->getnname());
	PhoneBook::_contacts[j].setnumber(contact->getnumber());
	PhoneBook::_contacts[j].setsecret(contact->getsecret());
	return (true);
}

void	PhoneBook::prompt_for_line(int *pos)
{
	std::string	rs;
	int			i;
	std::stringstream ss;

	std::cout << "Please choose a contact's index to display>> ";
	std::getline(std::cin, rs);
	while (!is_number(rs))
	{
		std::cout << "Enter contact's index>> ";
		std::getline(std::cin, rs);
	}
	ss << rs;
	ss >> i;
	while (i > *pos)
	{
		std::cout << "Enter a valid index>> ";
		std::getline(std::cin, rs);
	}
	ss << rs;
	ss >> i;
	full_contact(i);
}

void	PhoneBook::full_contact(int i)
{
	std::string	str;
	std::cout << "\n=== " << PhoneBook::_contacts[i].getfname() << " CONTACT DETAILS ===\n\n";
	str = PhoneBook::_contacts[i].getfname();
	std::cout << std::right <<std::setw(14) << "Name: " << str << std::endl;
	str = PhoneBook::_contacts[i].getlname();
	std::cout << std::right <<std::setw(14) << "Surname: " << str << std::endl;
	str = PhoneBook::_contacts[i].getnname();
	std::cout << std::right <<std::setw(14) << "Nickname: " << str << std::endl;
	str = PhoneBook::_contacts[i].getnumber();
	std::cout << std::right <<std::setw(13) << "Phone Number: " << str << std::endl;
}

bool	PhoneBook::search(int *pos)
{
	std::string	str;
	int j = *pos;
	if (j >= 8)
		j = 8;
	std::cout << "\n=== CONTACTS LIST ===\n\n";
	int counter = 0;
	while (counter < j)
	{
		std::cout << std::right << counter << "|";
		str = PhoneBook::_contacts[counter].getfname();
		std::cout << std::right <<std::setw(10) << check_len(str) << "|";
		str = PhoneBook::_contacts[counter].getlname();
		std::cout << std::right <<std::setw(10) << check_len(str) << "|";
		str = PhoneBook::_contacts[counter].getnname();
		std::cout << std::right <<std::setw(10) << check_len(str) << "|";
		str = PhoneBook::_contacts[counter].getnumber();
		std::cout << std::right <<std::setw(10) << check_len(str) << "|\n" <<std::endl;
		counter ++;
	}
	prompt_for_line(pos);
	return (true);
}

bool	PhoneBook::add(int *i, Contact *c)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string secret;
	std::string	phone_number;
	bool		status;

	std::cout << "Enter First Name:\n";
	std::getline(std::cin, first_name);
	while (first_name.length() == 0 || first_name[0] == ' ')
	{
		std::cout << "First Name Cannot be empty:\n";
		std::getline(std::cin, first_name);
	}

	std::cout << "Enter Last Name:\n";
	std::getline(std::cin, last_name);
	while (last_name.length() == 0 || last_name[0] == ' ')
	{
		std::cout << "Last Name Cannot be empty:\n";
		std::getline(std::cin, last_name);
	}
	std::cout << "Enter Nickname ;-)\n";
	std::getline(std::cin, nickname);
	while (nickname.length() == 0 || nickname[0] == ' ')
	{
		std::cout << "Nickname Cannot be empty:\n";
		std::getline(std::cin, nickname);
	}
	std::cout << "You can trust me with your secrets..\n";
	std::getline(std::cin, secret);
	while (secret.length() == 0 || secret[0] == ' ')
	{
		std::cout << "Secret Cannot be empty:\n";
		std::getline(std::cin, secret);
	}
	std::cout << "Enter your phone number:\n";
	std::getline(std::cin, phone_number);
	while (!is_number(phone_number) || phone_number.length() == 0)
	{
		std::cout << "Enter your REAL phone number:\n";
		std::getline(std::cin, phone_number);
	}
	c->setfname(first_name);
	c->setsname(last_name);
	c->setnname(nickname);
	c->setsecret(secret);
	c->setnumber(phone_number);
	status = this->saveContact(i, c); //copy!
	if (status)
		std::cout << (*i)++ <<std::endl;
	return (true);
}

std::string	PhoneBook::check_len(std::string str)
{
	if (str.length() <= 9)
		return (str);
	return ((str.substr(0, 9).std::string::append(".")));
}
//.std::string::append("."))

bool	PhoneBook::is_number(std::string telephone)
{
	int	j;

	j = 0;
	while (telephone[j])
	{
		if (telephone[j] < 48 || telephone[j] > 57)
			return (false);
		j++;	
	}
	return (true);
}
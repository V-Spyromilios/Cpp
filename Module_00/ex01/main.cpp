#include "includes.hpp"

int	check_response(std::string str)
{
	std::string str1 = "ADD";
	std::string str2 = "SEARCH";
	std::string	str3 = "EXIT";

	if (str.compare(str1) == 0)
		return (1);
	else if (str.compare(str2) == 0)
		return (2);
	else if (str.compare(str3) == 0)
		return (3);
	else
		return (4);
}

int	main()
{
	PhoneBook book;
	Contact		contact;
	int			rs;
	int 		i;
	bool		ok;

	i = 0;
	std::cout << "\n=== WELCOME TO PHONEBOOK ===\n";
	while (1)
	{
		std::string response;
		choose(&response);
		rs = check_response(response);
		if (rs > 3)
			continue ;
		else if (rs == 2)
			ok = book.search(&i);
		else if (rs == 1)
			ok = book.add(&i, &contact);
		else if (rs == 3)
		{
			goodbye();
			return (0);
		}
	}
	return (0);
}

void	choose(std::string *response)
{
	std::cout << "\nPlease choose: 'ADD' 'SEARCH' 'EXIT'\n" <<std::endl;
	std::getline(std::cin, *response);
}

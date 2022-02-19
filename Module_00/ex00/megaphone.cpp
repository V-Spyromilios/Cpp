#include <iostream>
#include <string>

void	print(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			c = s[i] - 32;
			std::cout << c;
		}
		else {
			std::cout << s[i];
		}
		i++;
	}
}


int	main(int argc, char **argv)
{
	std::string	input;
	int		i;
	int		j;
	std::string	msg;

	msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	i = 1;
	j = 0;
	if (argc < 2)
	{
		std::cout << msg;
		return (0);
	}
	while (argv[i])
	{
		print(argv[i]);
		i++;
		std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}

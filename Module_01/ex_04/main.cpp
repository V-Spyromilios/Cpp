#include <fstream>
#include <iostream>
#include <strstream>
#include <string>
#include <vector>

int	main(int argc, char **argv)
{
	std::ifstream ifs;
	std::string s1;
	std::string s2;
	std::string temp;
	std::string temp2;
	std::ofstream outfile("copy.txt");
 
	if (argc != 4) {
		std::cout << "Please provide 4 arguments.\n";
		return (-1);
	}
	ifs.open(argv[1]);
	if (ifs.good()) {
		s1  = argv[2];
		s2 = argv[3];
	}
	else {
		std::cout << "Error with opening File.\n";
		return (1);
	}
	ifs >> temp;
	while (std::getline(ifs, temp, ' ')) {
		if (temp.compare(s1) == 0)
			temp = s2;
		std::cout << temp << ' ';
		}
	
	ifs.close();
	return (0);
}
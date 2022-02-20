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
	std::ofstream outfile("copy.txt");
	std::size_t found;
	std::string::iterator it;
 
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
		std::cout << "Error while opening File: " << argv[1] << std::endl;
		return (1);
	}
	if (s1.length() == 0) {
		std::cout << "Length of First Argument Cannot be (0)\n";
		return (-1);
	}
	if (!outfile.good()) {
		std::cout << "Error with: copy.txt\n";
		return (-1);
	}
	while (std::getline(ifs, temp)) {
		while ((found = temp.find(s1)) != std::string::npos) {
			temp.erase(found, s1.length());
			temp.insert(found, s2);
		}
		outfile << temp << std::endl;
	}
	ifs.close();
	outfile.close();
	return (0);
}
#include <iostream>
#include <string>
#include <sstream>

int		main(int argc, char *argv[]) {

	if (argc !=2) {
		std::cout << "Max one argument to be provided" << std::endl;
		return (-1);
	}
	std::string str = argv[1];
	for (size_t i = 0; i < str.length(); i++) {
		str.at(i) = std::tolower(str.at(i));
	}
	bool isInf = (str.compare(0, str.length(), "inf") == 0 || str.compare(0, str.length(), "+inf") == 0 || str.compare(0, str.length(), "-inf") == 0);
	bool isDot = (str.find('.') != std::string::npos);
	std::cout << "Is Dot? " << isDot << std::endl;
	if (!isInf && str.at(str.length() -1 ) == 'f') {
		str =str.substr(0, str.length() -1);
	}
	long double ld;
	if (str.at(0) == '\'' && str.at(2) == '\'') {
		ld = static_cast<int>(str[1]);

	}
	else {
		std::sstream ss(str);
		ss >> ld;
	}
	if (isinf(ld) || isnan(ld) || ld < CHAR_MIN || ld > CHAR_MAX) {
		std::cout << "Char: Impossible" << std::endl;
	}

	// Char
	else if (std::isprint(static_cast<char>(ld))) {
		std::cout << "Char: " << static_cast<char>(ld) << std::endl;
	}
	else {
		std::cout << "Char: Not displayable" << std::endl;
	}

	//Int
	if (! (isinf(ld) || isnan(ld)) || ld < INT_MIN || ld > INT_MAX)) {
		std::cout << "Int: Impossible" << std::endl;
	}
	else {
		std::cout << "Int: " << static_cast<int>(ld) << std::endl;
	}

	//Float
	if (! (isinf(ld) || isnan(ld)) || ld < FLT_MIN || ld ) {
		std::cout << "Float: Impossible" << std::endl;
	}
	else {
		std::cout << "Float: " << std::setprecission(1) << std::fixed << static_cast<float>(ld) <<"f" << std::endl;
	}


	return (0);
}
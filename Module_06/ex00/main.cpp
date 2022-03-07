#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <iomanip>
#include <cfloat>
#include <cmath>

 bool	hasDots(std::string str) {
	int j = 0;
	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] == '.') { j++; }
	}
	 if (j > 1) {
		 return true;
	}
	return false;
 }

int		main(int argc, char *argv[]) {

	if (argc !=2) {
		std::cout << "please retry with one argument." << std::endl;
		return (-1);
	}
	std::string str = argv[1];
	for (size_t i = 0; i < str.length(); i++) {
		str.at(i) = std::tolower(str.at(i));
	}
	bool isInf = (str.compare(0, str.length(), "inf") == 0 || str.compare(0, str.length(), "+inf") == 0 || str.compare(0, str.length(), "-inf") == 0);
	
	if (hasDots(str)) {
		std::cout << "Check your input, too many dots!" << std::endl;
		return (-1);
	}
	//remove f of floats
	if (!isInf && str.at(str.length() -1 ) == 'f') {
		str =str.substr(0, str.length() -1);
	}
	long double ld;
	if (str.at(0) == '\'' && str.at(2) == '\'') {
		ld = static_cast<int>(str[1]);

	}
	else {
		std::stringstream ss(str);
		ss >> ld;
	}
	if ((ld == 0 && str.compare(0, str.length(), "0") != 0) && ((str.compare(0, str.length(), "inff") == 0 || str.compare(0, str.length(), "-inff") == 0 
		|| str.compare(0, str.length(), "inf") == 0 ||str.compare(0, str.length(), "-inf") == 0 
		|| str.compare(0, str.length(), "+inf") == 0|| str.compare(0, str.length(), "+inff") == 0))) {
		std::cout << "INVALID ARGUMENT" << std::endl;
		return (-1);
	}
	std::cout << std::endl << "==== CONVERTER ====" << std::endl << std::endl;

	// Char
	if (isinf(ld) || isnan(ld) || ld < CHAR_MIN || ld > CHAR_MAX) {
		std::cout << "Char: Impossible" << std::endl;
	}
	else if (std::isprint(static_cast<char>(ld))) {
		std::cout << "Char: " << static_cast<char>(ld) << std::endl;
	}
	else {
		std::cout << "Char: Not displayable" << std::endl;
	}

	//Int
	if (isinf(ld) || ::isnan(ld) || (ld < INT_MIN || ld > INT_MAX)) {
		std::cout << "Int: Impossible" << std::endl;
	}
	else {
		std::cout << "Int: " << static_cast<int>(ld) << std::endl;
	}

	//Float
	if ((isinf(ld) || isnan(ld)) && (ld < FLT_MIN || ld > FLT_MAX )) {
		std::cout << "Float: Impossible" << std::endl;
	}
	else {
		std::cout << "Float: " << std::setprecision(1) << std::fixed << static_cast<float>(ld) <<"f" << std::endl;
	}

	//Double
	if ( (isinf(ld) || isnan(ld)) && (ld < DBL_MIN || ld > DBL_MAX)) {
		std::cout << "Double: Impossible" << std::endl << std::endl;
	}
	else {
		std::cout << "Double: " << std::setprecision(2) << std::fixed << static_cast<double>(ld) << std::endl << std::endl;
	}

	return (0);
}
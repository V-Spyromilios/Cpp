
#include <vector>
#include <iostream>

template <typename T>
int		find(std::vector<T> list, int needle) {
	for (std::vector<int>::iterator it = list.begin(); it != list.end();  ++it) {
	if (*it == needle)
		return (*it);
	}
	return (-1);
}

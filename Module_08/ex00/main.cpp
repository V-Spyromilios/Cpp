#include "easyfind.hpp"

int main() {

	int arr[] = {16, 2, 77, 29};
	std::vector<int> lst(arr, arr + sizeof(arr) / sizeof(int)); 
	int rs = ::find(lst, 77);
	std::cout << rs << std::endl;

	return (0);
}
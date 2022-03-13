#include "Iter.hpp"


int	main() {

	//char arr[5] = {'a', 'b', 'c', 'd', 'e'};
	//int arr[5] = {10, 20, 30, 40, 50};
	float arr[5] = {2.5, 3.5, 4.5, 5.5, 11.1};
	iter(arr, 5, fun);
	for (int i = 0; i < 5; i++){
		std::cout << arr[i] << std::endl;
	}

	return (0);
}
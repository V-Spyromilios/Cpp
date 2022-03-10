#include "Iter.hpp"

int multiply(int j) {
	return j * 2;

}

int	main() {

	int arr[5] = {1, 2, 3, 4, 5};
	iter(&arr, 5, &multiply);
}
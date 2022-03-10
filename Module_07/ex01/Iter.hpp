#ifndef "ITER_HPP"
#define "ITER_HPP"

#include <iostream>

template< typename T>
void	iter(T *arr[], int len, T (*ptr)()) {
	for (int i = 0; i < len; i++) {
	
		ptr(arr[i]);
	}
}

#endif
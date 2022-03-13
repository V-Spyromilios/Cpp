#ifndef ITER_HPP
#define ITER_HPP
// Fun with FUNction's pointer
#include <iostream>

template< typename T>
void	iter(T *arr, size_t len, T (*fun)(T)) {
	for (size_t i = 0; i < len; i++) {
		arr[i] = fun(arr[i]);
	}
}

template <typename T>
T fun(T i) { return i * 2; }

#endif

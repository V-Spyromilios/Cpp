#include <iostream>

template< typename W >
void swap(W &a, W &b) {

	W temp;
	temp = a;
	a = b;
	b = temp;
}

template< typename W >
W	min(W &a, W &b) {

	return ( b <= a ? b : a);
}

template< typename W >
W max(W &a, W &b) {

	return ( b >= a ? b : a);
}
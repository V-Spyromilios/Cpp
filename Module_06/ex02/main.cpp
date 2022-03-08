#include <iostream>
#include <random>

class Base { public: virtual ~Base() {};};
class A: public Base {};
class B: public Base {};
class C: public Base {};	

Base* generate(void) {

	srand(time(NULL)); 
	int ran = rand() % 3;
	if (ran== 1) {
		std::cout << ran << std::endl;
		return (new (A));
	}
	else if (ran == 2) {
		std::cout << ran << std::endl;
		return (new (B));
	}
	else {
		std::cout << ran << std::endl;
		return (new (C)); }
 }

void identify(Base* p) {

	A* alpha;
	B* beta;
	C* gama;

	if 	((alpha = dynamic_cast<A *>(p))) {
		std::cout << "Its type A" << std::endl;
	}
	else if 	((beta = dynamic_cast<B *>(p))) {
		std::cout << "Its type B" << std::endl;
	}
	else if 	((gama = dynamic_cast<C *>(p))) {
		std::cout << "Its type C" << std::endl;
	}
	else {
		std::cout << "Type Uknown, try again" << std::endl;
	}

}

void identify(Base &p) {
	Base b;
	try {
		b = dynamic_cast<A &>(p);
		std::cout << "Its type A (REF)" << std::endl;
	}
	catch(const std::bad_cast& e) { std::cout << "Exception: " << e.what() << std::endl;}
	try {
		b = dynamic_cast<B &>(p);
		std::cout << "Its type B (REF)" << std::endl;
	}
	catch(const std::bad_cast& e) { std::cout << "Exception: " << e.what() << std::endl;}
	try {
		b = dynamic_cast<C &>(p);
		std::cout << "Its type C (REF)" << std::endl;
	}
	catch(const std::bad_cast& e) { std::cout << "Exception: " << e.what() << std::endl;}
}

int		main() {
	Base* pt = generate();
	identify(pt);
	identify(*pt);

	delete (pt);
	return (0);
}
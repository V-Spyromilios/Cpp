#include <iostream>

class Data {
	public:
	Data() {};
	Data(int rank, std::string name): _rank(rank), _name(name) {};

int getRank() { return this->_rank; }
std::string getName() { return this->_name; }

private:

int 		_rank;
std::string _name;
};

uintptr_t serialize(Data* content) {
	return reinterpret_cast<uintptr_t>(content);
}

Data* deserialize(uintptr_t content) {
	return reinterpret_cast<Data*>(content);
}

int main() {
	Data d(42, "Vagelis");
	Data* d1 = &d;
	std::cout << d1->getName() << std::endl;
	std::cout << d1->getRank() << std::endl;
	std::cout << "====" << std::endl;

	uintptr_t tmp = serialize(d1);
	Data* d2 = deserialize(tmp);
	std::cout << d2->getName() << std::endl;
	std::cout << d2->getRank() << std::endl;
	std::cout << "====" << std::endl;

	return (0);
}

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void) {
	int i = 0;

	Animal *a[6];
	while (i < 6)
	{
		if (i % 2 == 0) {
			a[i] = new Dog();
			a[i]->getType();
			a[i]->makeSound();
		}
		else {
			a[i] = new Cat();
			a[i]->getType();
			a[i]->makeSound();
		}
		i++;
	}
	i = 0;
	while (i < 6)
	{
		delete a[i];
		i++;
	}
// j->makeSound();
// j->brain;
// delete j;

return (0); 
}
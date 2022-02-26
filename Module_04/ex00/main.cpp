#include "CatClass.hpp"
#include "DogClass.hpp"
#include "WrongCat.hpp"

int		main(void)  {
	const AnimalClass *dyno = new AnimalClass();
	const AnimalClass *cat = new CatClass();
	const AnimalClass *doggie = new DogClass();
	const WrongAnimal *wr = new WrongCat();
	std::cout << "=====" << std::endl;
	dyno->makeSound();
	cat->makeSound();
	doggie->makeSound();
	wr->makeSound();
	std::cout << "=====" << std::endl;
	const WrongCat *thecat = new WrongCat();
	thecat->makeSound();
	std::cout << "=====" << std::endl;

	delete dyno;
	delete cat;
	delete doggie;
	delete wr;
	return (0);
}
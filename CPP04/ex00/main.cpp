#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete i;
	delete j;
	delete meta;

	std::cout << std::endl;
	std::cout << std::endl;
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* h = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << h->getType() << " " << std::endl;
	k->makeSound();
	h->makeSound();
	delete k;
	delete h;

	return(0);
}
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// AAnimal f; // -> Ne doit pas compiler

	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	return 0;
}

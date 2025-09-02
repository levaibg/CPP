#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private : 
		Brain *brain;
	public: 
	Dog();
	~Dog();
	Dog(Dog const &other);

	void makeSound() const;
	Dog &operator=(const Dog &other);
	std::string getType() const;

};
#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
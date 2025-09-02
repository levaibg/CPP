#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private : 
	public: 
	Dog();
	~Dog();
	Dog(Dog const &other);

	void makeSound() const;
	Dog &operator=(const Dog &other);
	std::string getType() const;

};
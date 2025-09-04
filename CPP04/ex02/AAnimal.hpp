#pragma once
#include <string>
#include <iostream>


class AAnimal
{

	protected :
	std::string _type;

	public :
	AAnimal();
	virtual ~AAnimal();
	AAnimal(const AAnimal &other);
	virtual void makeSound() const = 0;
	AAnimal &operator=(const AAnimal &other);
	std::string getType() const;

};
#pragma once
#include <string>
#include <iostream>


class Animal
{

	protected :
	std::string _type;

	public :
	Animal();
	virtual ~Animal();
	Animal(const Animal &other);
	virtual void makeSound() const;
	Animal &operator=(const Animal &other);
	std::string getType() const;

};
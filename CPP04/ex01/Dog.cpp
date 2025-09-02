#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "DOG constructor called" << std::endl;
	_type = "Dog";
	this->brain = new Brain();
	std::cout << "ASKJSHDSAJKDHJKDHJKSHJKDDHAShjasdhjkdhjkasdshjdhjskdhjksakhjasdjhksdshjad" << std::endl;
}
Dog::~Dog()
{
	delete this->brain;
	std::cout << "DOG deconstrucotr called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog copy construcotr called" << std::endl;
	*this = other;
}
Dog& Dog::operator=(const Dog &other)
{
	if(this != &other)
	{
		_type = other._type;
		if (other.brain)
			delete other.brain;
		else
			this->brain = other.brain;

	}
	return(*this);
}


void Dog::makeSound() const
{
	std::cout << "*Wouf Wouf*" << std::endl;
}

std::string Dog::getType() const
{
	return(this->_type);
}

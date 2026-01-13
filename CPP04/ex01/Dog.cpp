#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "DOG constructor called" << std::endl;
	_type = "Dog";
	this->brain = new Brain();
}
Dog::~Dog()
{
	delete this->brain;
	std::cout << "DOG destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(), brain(NULL)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}
Dog& Dog::operator=(const Dog &other)
{
	 if (this != &other)
	{
		_type = other._type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}


void Dog::makeSound() const
{
	std::cout << "*Wouf Wouf*" << std::endl;
}

std::string Dog::getType() const
{
	return(this->_type);
}

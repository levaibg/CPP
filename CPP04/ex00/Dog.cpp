#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "DOG constructor called" << std::endl;
	_type = "Dog";
}
Dog::~Dog()
{
	std::cout << "DOG deconstrucotr called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if(this != &other)
		_type = other._type;
	return(*this);}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog copy construcotr called" << std::endl;
	*this = other;
}

void Dog::makeSound() const
{
	std::cout << "*Wouf Wouf*" << std::endl;
}

std::string Dog::getType() const
{
	return(this->_type);
}

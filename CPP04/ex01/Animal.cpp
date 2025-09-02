#include "Animal.hpp"

Animal::Animal()
{
	_type = "Strange creature";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy construcotr called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal &other)
{
	if(this != &other)
		_type = other._type;
	return(*this);
}

void	Animal::makeSound()  const
{
	std::cout << "*Strange animaling noises*" << std::endl;
}
std::string Animal::getType() const
{
	return(this->_type);
}
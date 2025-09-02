#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat construcotr called" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destrucor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Animal construcotr copy called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if(this != &other)
		_type = other._type;
	return(*this);
}

std::string Cat::getType() const
{
	return(this->_type);
}

void	Cat::makeSound() const
{
	std::cout << "*mew, mew, mew*" << std::endl;
}
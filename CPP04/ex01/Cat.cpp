#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(), brain(NULL)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	 if (this != &other)
	{
		_type = other._type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
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
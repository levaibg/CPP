#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "Strange creature";
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	if(this != &other)
		_type = other._type;
	return(*this);
}

void	AAnimal::makeSound()  const
{
	std::cout << "*Strange Aanimaling noises*" << std::endl;
}
std::string AAnimal::getType() const
{
	return(this->_type);
}
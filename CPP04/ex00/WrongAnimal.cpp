#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Strange creature";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy construcotr called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if(this != &other)
		_type = other._type;
	return(*this);
}

void	WrongAnimal::makeSound()  const
{
	std::cout << "*Strange WrongAnimaling noises*" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return(this->_type);
}
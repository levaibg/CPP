#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat construcotr called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destrucor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << "WrongCat construcotr copy called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if(this != &other)
		_type = other._type;
	return(*this);
}

std::string WrongCat::getType() const
{
	return(this->_type);
}

void	WrongCat::makeSound() const
{
	std::cout << "mew, mew, mew" << std::endl;
}
#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat construcotr called" << std::endl;
	_type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destrucor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(), brain(NULL)
{
	std::cout << "AAnimal construcotr copy called" << std::endl;
	if(this != &other)
	{
		_type = other._type;
		if (other.brain)
			delete other.brain;
		else
			this->brain = other.brain;
	}
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
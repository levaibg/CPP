#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
	{
		_ideas[i] = "hmmm, Hamburger";
	}
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	if(this != &other)
	{
		for( int i = 0; i < 100; i++)
		{
			this->_ideas[i] = other._ideas[i];
		}
	}
	return(*this);
}
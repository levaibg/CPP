#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}
Fixed::Fixed(Fixed &second) 
{
	std::cout << "Copy constructor called" << std::endl;
	_value = second.getRawBits();
}

Fixed::~Fixed()
{	
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

Fixed &Fixed::operator=(Fixed const & other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return(*this);
}



#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout<< "default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called " << std::endl;
}
Fixed::Fixed(Fixed const &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}
Fixed::Fixed(const int jar)
{
	std::cout << "const int constructor called" << std::endl;
	this->_value = jar << _bitvalue;
}

Fixed::Fixed(const float numb)
{
	std::cout << "const float constructor called" << std::endl;
	this->_value = roundf(numb * (1 << _bitvalue));
}

std::ostream& operator<<(std::ostream& os, Fixed const &other)
{
	os << other.toFloat();
	return(os);
}

Fixed &Fixed::operator=(Fixed const & other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other._value;
	return(*this);
}

float Fixed::toFloat( void ) const
{
	return((float)this->_value / (1 << _bitvalue));
}

int Fixed::toInt( void ) const
{
	return((int)this->_value >> _bitvalue);
}
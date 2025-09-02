#include "Fixed.hpp"


Fixed::Fixed() : _value(0)
{
	// std::cout<< "default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Default destrctor called " << std::endl;
}
Fixed::Fixed(Fixed const &other)
{
	this->_value = other._value;
}
Fixed::Fixed(const int jar)
{
	// std::cout << "const int constructor called" << std::endl;
	this->_value = jar << _bitvalue;
}

Fixed::Fixed(const float numb)
{
	// std::cout << "const float constructor called" << std::endl;
	this->_value = roundf(numb * (1 << _bitvalue));
}

bool Fixed::operator>(const Fixed& rhs) const
{
	return(this->_value > rhs._value);
}
bool Fixed::operator<(const Fixed& rhs) const
{
	return(this->_value < rhs._value);
}
bool Fixed::operator>=(const Fixed& rhs) const
{
	return(this->_value >= rhs._value);

}
bool Fixed::operator<=(const Fixed& rhs) const
{
	return(this->_value <= rhs._value);

}
bool Fixed::operator==(const Fixed& rhs) const
{
	return(this->_value == rhs._value);

}
bool Fixed::operator!=(const Fixed& rhs) const
{
	return(this->_value != rhs._value);
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
	Fixed tmp;

	tmp.setRawBits(this->_value + rhs._value);
	return(tmp);
}
Fixed Fixed::operator-(const Fixed& rhs) const
{
	Fixed tmp;
	tmp.setRawBits(this->_value - rhs._value);
	return(tmp);
}
Fixed Fixed::operator*(const Fixed& rhs) const
{
	Fixed tmp;

	tmp.setRawBits((this->_value * rhs._value) >> _bitvalue);
	return(tmp);
}
Fixed Fixed::operator/(const Fixed& rhs) const
{
	Fixed tmp;

	tmp.setRawBits((this->_value << _bitvalue) / rhs._value);
	return(tmp);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return(a);
	return(b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return(a);
	return(b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return(a);
	return(b);
}


const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return(a);
	return(b);
}

Fixed& Fixed::operator++()
{
	this->_value++;
	return(*this);
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return(*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_value++;
	return(tmp);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_value++;
	return(tmp);
}
int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}
void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}


float Fixed::toFloat( void ) const
{
	return((float)this->_value / (1 << _bitvalue));
}

int Fixed::toInt( void ) const
{
	return((int)this->_value >> _bitvalue);
}

Fixed &Fixed::operator=(Fixed const & other)
{
	this->_value = other._value;
	return(*this);
}
std::ostream& operator<<(std::ostream& os, Fixed const &other)
{
	os << other.toFloat();
	return(os);
}





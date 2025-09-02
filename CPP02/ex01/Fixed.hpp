#pragma once

#include <iostream>
#include <string>
#include <tgmath.h>

class Fixed
{
	private:
		static const int _bitvalue = 8;
		int	_value;

	public :
	Fixed();
	Fixed(const int jar);
	Fixed(const float numb);
	Fixed(Fixed const &other);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed &operator=(Fixed const & other);
};

std::ostream& operator<<(std::ostream& os, Fixed const &other);

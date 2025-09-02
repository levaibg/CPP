#pragma once

#include <string>
#include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _bitValue = 8;

	public :
	Fixed();
	Fixed(Fixed &second);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed &operator=(Fixed const & other);
};
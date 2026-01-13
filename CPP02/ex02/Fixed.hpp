#pragma once

#include <iostream>
#include <string>
#include <tgmath.h>


class Fixed 
{
	private:
		int _value;
		static const int _bitvalue = 8;


	public:
	Fixed();
	~Fixed();
	Fixed(const int jar);
	Fixed(const float numb);
	Fixed(Fixed const &other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );



	bool operator>(const Fixed& rhs) const;
	bool operator<(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;

	Fixed operator+(const Fixed& rhs) const;
	Fixed operator-(const Fixed& rhs) const;
	Fixed operator*(const Fixed& rhs) const;
	Fixed operator/(const Fixed& rhs) const;

	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed& max(Fixed &a, Fixed &b);
	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed &operator=(Fixed const & other);
};

std::ostream& operator<<(std::ostream& os, Fixed const &other);

#pragma once

#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>
#include <stdint.h> 
#include <vector>
#include <algorithm>


// template <typename T>

class indexTooHigh : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "The Index choosen is too high";
		}
};

class vectorSize : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "The vector dont have enough numbers";
		}
};

class Span
{
	private : 
	std::vector<int> _numbers;
	unsigned int _maxSize;
	unsigned int _indent; 

	public :
	Span();
	Span(unsigned int N);
	~Span();
	Span &operator=(const Span &other);
	Span(Span const &other);
	void addNumber(int numb);
	int    longestSpan(void) const;
	int   shortestSpan(void) const;
	void addRange(void);
	void	printVector(void);


};
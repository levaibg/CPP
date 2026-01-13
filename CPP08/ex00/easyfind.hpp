#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <exception>



class noOccurence : public std::exception
{	
	public:
		const char* what() const throw()
		{
			return "There is no occurence";
		}
	};

// template < class T, class Alloc = allocator<T> > class vector; // generic template
template <typename T>

void	easyfind(T &a, int b)
{
	if(std::find(a.begin(), a.end(), b) == a.end())
	{
		throw noOccurence();
	}
}
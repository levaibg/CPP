#pragma once
#include <iostream>	
#include <iomanip>
#include <cstdlib>

template <typename T>

class Array
{
	private : 
		unsigned int _len;
		T	*_element;
	public :
	Array() : _len(0), _element(new T[0]) {}

	~Array()
	{
		delete [] _element;
	}
	Array(unsigned int n) : _len(n)
	{
		_element= new T[n]();
		// for(unsigned int i; i < n; i++)
			// _element[i] = 
	}
	Array(const Array &other)
	{
		*this = other;
	}
	Array &operator=(Array const &other)
	{
		if(this != &other)
		{
			delete[] _element;
			_len = other._len;
			_element = new T[_len];
			for(unsigned int i = 0; i < _len; i++)
				_element[i] = other._element[i];
		}
		return(*this);
	}
	T &operator[](int index)
	{
		if(static_cast<unsigned int>(index) > _len || index < 0)
		{
			throw("index is out of bounds");
		}
		return(_element[index]);
	}
};


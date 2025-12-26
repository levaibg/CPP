#pragma once
#pragma once 
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <exception>

template <typename T>
class Array
{
private:
	unsigned int _len;
	T* _element;
	
public:
	class OutOfBounds : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Index out of bounds";
		}
	};

	Array() : _len(0), _element(NULL) {}

	Array(unsigned int n) : _len(n), _element(new T[n]()) {}

	Array(const Array& other) : _len(0), _element(NULL)
	{
		*this = other;
	}

	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			delete[] _element;
			_len = other._len;
			_element = new T[_len];
			for (unsigned int i = 0; i < _len; i++)
				_element[i] = other._element[i];
		}
		return *this;
	}
	~Array()
	{
		delete[] _element;
	}

	T& operator[](int index)
	{
		if (index < 0 || static_cast<unsigned int>(index) >= _len)
			throw OutOfBounds();
		return _element[index];
	}

	unsigned int size() const
	{
		return _len;
	}
};

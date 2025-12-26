#pragma once
#include <iostream>	
#include <cstddef>

template <typename T>

void iter(const T *a, size_t len, void (*f)(T const &))
{
	for(std::size_t i = 0; i < len; i++)
		f(a[i]);
}
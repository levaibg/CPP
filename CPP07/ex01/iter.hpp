#pragma once
#include <iostream>	

template <typename T, typename F>
void  iter(T *a, std::size_t b, F c)
{
	for(std::size_t i = 0; i < b; i++)
		c(a[i]);
}
#pragma once
#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>
#include <stdint.h> 


template<typename T>

void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
	
}
template<typename D>
D min(D a, D b)
{
	if(a > b)
		return b;
	else if(a == b)
		return b;
	return(a);
}

template<typename R>
R max(R a, R b)
{
	if(a > b)
		return a;
	else if(a == b)
		return b;
	return(b);
}
#pragma once

#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>
#include <stdint.h> 


struct Data
{
	int a, b;
};


class Serialization
{
	private:
	
	public:
		Serialization();
		~Serialization();
		Serialization(Serialization const &other);
		Serialization &operator=(Serialization const &other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};



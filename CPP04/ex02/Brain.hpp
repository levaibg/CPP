#pragma once
#include <string>
#include <iostream>

class Brain
{
	private : 
		std::string _ideas[100];
	public:
	Brain();
	~Brain();
	Brain(const Brain &other);

	Brain &operator=(const Brain &other);
	
};

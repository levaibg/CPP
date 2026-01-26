#pragma once

#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>
#include <stdint.h> 
#include <algorithm>
#include <stack>
#include <fstream>

class RNP
{
	private : 
		std::stack<int> stack;
	public : 

	RNP();
	~RNP();
	RNP(RNP const &other);
	RNP &operator=(RNP const &other);
	void	sorting(int sign);
	void	checksign(std::string str);
	void	set(int numb);


};
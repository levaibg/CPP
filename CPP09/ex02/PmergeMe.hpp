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
#include <vector>
#include <deque>



class PmergeMe
{
	private :
		// int levai;
		std::vector<int> _vec;
		std::deque<int > _d;

	public : 
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe const &other);
		PmergeMe &operator=(PmergeMe const &PmergeMe);
		void	algo(std::string str);
		void	setStack1(int numb);
		std::vector<int> getVect(void);
		std::vector<int>	setFirstStack(std::vector<int> bigBase);
		void	checkArgs(std::string s);
		int	jacubstall(int index);
	std::vector<int>::iterator binarySearch(std::vector<int> &vec, int target);



};
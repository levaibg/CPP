#pragma once

#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>
#include <stdint.h> 
#include <vector>
#include <algorithm>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
    public : 
        typedef typename std::deque<T>::iterator iterator;

        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
    
};
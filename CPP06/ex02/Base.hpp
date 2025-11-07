#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>
#include <stdint.h> 


class Base
{
	public : 
		Base();
		virtual ~Base();
		Base(Base const &other);
		Base &operator=(Base const &other);
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);

};
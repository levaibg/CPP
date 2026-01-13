#pragma once
#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>

class ScalarConverter
{

	public : 

	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);

	static void convert(const std::string& str);
	static int	is_print(int s);
	static bool check(const std::string& str);

};
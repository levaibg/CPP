#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}
int ScalarConverter::is_print(int ss)
{
    if(ss >= 32 && ss <= 126)
		return(0);
	else
		return(1);
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	if(this != &other)
		return(*this);
	return(*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

void ScalarConverter::converting(char *str1)
{
	int i;
	// float f;
	char c;

	// if(str1 == "nan")
	// {
	// 	std::cout << "char : impossible \nint : impossible \nfloat : nanf \ndouble : nan" << std::endl;
	// 	return;
	// }
	double first = std::atof(str1);
	c = static_cast<char>(first);
	if(is_print(c))
	{
		std::cout << "char : non printable" << std::endl;
	}
	else
	{
		std::cout << "char: " << c << std::endl;
	}
	i = static_cast<int>(first);
	if(first > INT_MAX || first < INT_MIN)
		std::cout << "int : non printable" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(first) << std::endl;
	
	std::cout << "float: " << static_cast<float>(first) << "f" << std::endl;

	std::cout << "double : " << first << std::endl;
	return;
	
}

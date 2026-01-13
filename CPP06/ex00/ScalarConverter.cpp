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

bool ScalarConverter::check(const std::string& str)
{
	bool test2 = false;
	if (str == "nan" || str == "nanf")
		test2 = true;
	if (str == "+inf" || str == "-inf"
		|| str == "+inff" || str == "-inff")
		test2 = true;

	if(test2)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;

		if (str == "nanf" || str == "+inff" || str == "-inff")
		{
			std::cout << "float: " << str << std::endl;
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		}
		else
		{
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
		}
		return true;
	}
	
	return false;
}


void ScalarConverter::convert(const std::string& str)
{
	if(check(str) ==true)
		return;
	double first = std::atof(str.c_str());
	if (first < 0 || first > 127)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(first)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(first) << "'" << std::endl;

	if (first < INT_MIN || first > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(first) << std::endl;

	float f = static_cast<float>(first);
	if (f == static_cast<int>(f))
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

	if (first == static_cast<int>(first))
		std::cout << "double: " << first << ".0" << std::endl;
	else
		std::cout << "double: " << first << std::endl;
}


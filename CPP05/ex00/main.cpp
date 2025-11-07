#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "First test" << std::endl << std::endl;
	try
	{
		Bureaucrat a("Pierre", 140);
		std::cout << a << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "Second" << std::endl << std::endl;
	try
	{
		Bureaucrat b("Pierre", 2);
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "Third" << std::endl << std::endl;
	try
	{
		Bureaucrat c("Pierre", 170);
		std::cout << c << std::endl;
		c.decrementGrade();
		std::cout << c << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
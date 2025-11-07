#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "Test 1" << std::endl;
	try
	{
		Bureaucrat a("Alice", 10);
		Form f("Contract", 20, 50);
		std::cout << f << std::endl;
		a.signForm(f);
		std::cout << f << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTest 2" << std::endl;
	try
	{
		Bureaucrat b("Bob", 100);
		Form f("TopSecret", 50, 75);
		std::cout << f << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTest 3" << std::endl;
	try
	{
		Form f("Impossible", 0, 10);
		std::cout << f << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTest 4" << std::endl;
	try
	{
		Form f("Invalid", 100, 200);
		std::cout << f << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

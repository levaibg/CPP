#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Bureaucrat high("Alice", 1);
	Bureaucrat low("Bob", 150);

	ShrubberyCreationForm shrub("garden");
	RobotomyRequestForm robo("Bender");
	PresidentialPardonForm pres("Ford Prefect");

	std::cout << "\n--- Test Shrubbery ---" << std::endl;
	low.signForm(shrub);
	high.signForm(shrub);
	low.executeForm(shrub);
	high.executeForm(shrub);

	std::cout << "\n--- Test Robotomy ---" << std::endl;
	high.signForm(robo);
	high.executeForm(robo);
	high.executeForm(robo);
	high.executeForm(robo);

	std::cout << "\n--- Test Presidential ---" << std::endl;
	low.signForm(pres);
	high.signForm(pres);
	low.executeForm(pres);
	high.executeForm(pres);
	Intern Tourpalv;
	AForm* rrf;
	rrf = Tourpalv.makeForm("RobotomyRequestForm", "Bender");
	
	return 0;
}

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}
Intern::~Intern()
{
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return(*this);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string tab[3] = {"shrubbery creation", "robotomy request" , "presidential pardon"};
	int i = 0;
	for (; i <= 2; i++)
	{
		if (formName == tab[i])
			break;
	}
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Error : Name not good for intern (he is new)" << std::endl;
	}
	return(NULL);
}

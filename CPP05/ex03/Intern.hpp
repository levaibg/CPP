#pragma once
#include "Bureaucrat.hpp"
#

class Intern
{
	public :
		Intern();
		~Intern();
		Intern(Intern const &other);
		Intern &operator=(Intern const &other);
		AForm* makeForm(std::string formName, std::string target);
};
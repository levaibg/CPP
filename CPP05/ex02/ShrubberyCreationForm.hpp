#pragma once

#include "AForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private : 
		std::string _target;

	public :
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
	void execute(Bureaucrat const &executor)const;
	std::string getTarget(void)const;
	class FormNotSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &os, ShrubberyCreationForm *a);
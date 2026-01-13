#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	private :
		std::string _target;

	public : 
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	void execute(Bureaucrat const &executor)const;
	std::string getTarget(void)const;
	class FormNotSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

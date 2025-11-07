#pragma once
#include "Bureaucrat.hpp"

class RobotomyRequestForm
{
	private:
		std::string _name;
		int _gradeToSign;
		int _gradeToExecute;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

};

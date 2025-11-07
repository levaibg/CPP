#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm
{
private:
	std::string _name;
	bool _signed;
	int _gradeToSign;
	int _gradeToExecute;

public:
	AForm();
	virtual ~AForm();
	AForm();
	AForm &operator=(const AForm &other);
	AForm(const AForm &other);
	virtual void execute(Bureaucrat const & executor) const = 0;
	bool getSigned() const;
	int getTosign() const;
	int getToExec() const;
	std::string getName() const;
	void beSigned(Bureaucrat &b);


	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, AForm const &other);

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const std::string _name;
		bool _signed;
		int _gradeToSign;
		int _gradeToExecute;

		
	public:
	Form();
	~Form();
	Form(const Form &other);
	Form(std::string name, int gradeTosign, int gradetoexecute);
	Form &operator=(const Form &other);
	void beSigned(Bureaucrat &b);
	std::string getName() const;
	bool getSigned() const;
	int getTosign() const;
	int getToExec() const;

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

std::ostream &operator<<(std::ostream &os, Form const &other);

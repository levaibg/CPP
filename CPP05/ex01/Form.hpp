#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
		Form();

		
	public:
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

#pragma once
#include <string>
#include <iostream>
#include <tgmath.h>
#include "AForm.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int garde);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	std::string getName() const;
	void executeForm(AForm const & form);
	int getGrade() const;
	// void GradeTooHighException();
	// void GradeTooLowException();
	void incrementGrade();	
	void decrementGrade();
	void signForm(AForm &f);

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

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);
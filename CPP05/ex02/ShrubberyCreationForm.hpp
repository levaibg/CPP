#pragma once
#include "AForm.hpp"
#include <fstream>
#include <string>



class ShrubberyCreationForm :  public AForm
{
	private:
	std::string _name;
	int _gradeToSign;
	int _gradeToExecute;

	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		void	execute();
		void	makefile();


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
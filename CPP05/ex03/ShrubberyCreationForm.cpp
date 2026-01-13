#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other), _target(other._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		this->_target = other._target;
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw FormNotSigned();
	if (executor.getGrade() > this->getToExec())
		throw Bureaucrat::GradeTooLowException();

	std::string name = this->_target;
	name += "_shrubbery";
	std::ofstream outfile(name.c_str());
	if (!outfile)
	{
		std::cerr << "Error: could not create file." << std::endl;
		return;
	}
	outfile << "	   _-_			  _-_" << std::endl;
	outfile << "	/~~   ~~\\		/~~   ~~\\ " << std::endl;
	outfile << " /~~		 ~~\\   /~~		 ~~\\ " << std::endl;
	outfile << "{			   } {			   }" << std::endl;
	outfile << " \\  _-	 -_  /   \\  _-	 -_  / " << std::endl;
	outfile << "   ~  \\\\ //  ~	 ~  \\\\ //  ~ " << std::endl;
	outfile << "_- -   | | _- _   _- -   | | _- _ " << std::endl;
	outfile << "  _ -  | |   -_	 _ -  | |   -_ " << std::endl;
	outfile << "	  // \\\\			// \\\\ " << std::endl;

	outfile.close();
}

const char *ShrubberyCreationForm::FormNotSigned::what() const throw()
{
	return "Form not signed";
}
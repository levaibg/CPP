#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : _name("Arbreguy"), _gradeToExecute(145), _gradeToSign(137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : _name(name), _gradeToExecute(145), _gradeToSign(137)
{

}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : _name("Arbreguy"), _gradeToExecute(145), _gradeToSign(137)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	this->_gradeToSign = other._gradeToSign;
	this->_gradeToExecute = other._gradeToExecute;
	this->_name = other._name;
	return(*this);
}

void ShrubberyCreationForm::execute()
{
	try
	{
		if(this->_gradeToSign > 145 || this->_gradeToSign > 137)
			throw(GradeTooLowException());
		else
		{
			this->makefile();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	ShrubberyCreationForm::makefile()
{
	std::string file = this->_name;
	file += "_shrubbery";
	std::ofstream outfile(file);
	if(!outfile)
	{
		std::cout << "Eroor oufile not created" << std::endl;
		return;
	}
	std::ifstream infile("ascii.txt");
	if(!infile.is_open())
	{
		std::cout << "Error oppening infile" << std::endl;
		outfile.close();
		return;
	}
	std::string line;
	while (std::getline(infile, line))
	{
		outfile << line << std::endl;
	}
	// outfile << "test" << std::endl;
	outfile.close();
}
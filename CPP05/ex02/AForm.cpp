#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{}

AForm::AForm(std::string name, int gradetosign, int gradetoexecute)
	: _name(name), _signed(false), _gradeToSign(gradetosign), _gradeToExecute(gradetoexecute)
{
	if (gradetosign < 1 || gradetoexecute < 1)
		throw GradeTooHighException();
	if (gradetosign > 150 || gradetoexecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
	: _name(other._name),
	  _signed(other._signed),
	  _gradeToSign(other._gradeToSign),
	  _gradeToExecute(other._gradeToExecute)
{}

AForm::~AForm()
{}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
		this->_gradeToSign = other._gradeToSign;
		this->_gradeToExecute = other._gradeToExecute;
	}
	return *this;
}

std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getSigned() const
{
	return this->_signed;
}

int AForm::getTosign() const
{
	return this->_gradeToSign;
}

int AForm::getToExec() const
{
	return this->_gradeToExecute;
}

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, AForm const &other)
{
	std::string anwser;

	if(other.getSigned())
		anwser = "yes";
	else
		anwser = "no";
	os << other.getName()
	   << ", form sign grade " << other.getTosign()
	   << ", execute grade " << other.getToExec()
	   << ", signed: " << anwser;
	return os;
}

#include "AForm.hpp"

AForm::AForm()
{
	std::cout << "Base AForm called" << std::endl;
	this->_name = "Pierre";
	this->_gradeToExecute = 7;
	this->_signed = false;
	this->_gradeToSign = 42;
}

AForm::~AForm()
{
	
}

AForm::AForm(const AForm &other)
{
	std::cout << "AForm Copy construcor called" << std::endl;
	*this = other;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "AForm copy operator called" << std::endl;

	if (this != &other)
	{
		this->_signed = other._signed;
		this->_gradeToSign = other._gradeToSign;
		this->_gradeToExecute = other._gradeToExecute;
	}
	return (*this);
}

// AForm::AForm(std::string name, int gradeTosign, int gradetoexecute) : _name(name), _gradeToSign(gradeTosign), _gradeToExecute(gradetoexecute)
// {
// 	_signed = false;
// 	if (gradeTosign < 1 || gradetoexecute < 1)
// 		throw GradeTooHighException();
// 	if (gradeTosign > 150 || gradetoexecute > 150)
// 		throw GradeTooLowException();
// }

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= this->_gradeToExecute)
		throw(GradeTooLowException());
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

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}
int AForm::getTosign() const
{
	return (this->_gradeToSign);
}
int AForm::getToExec() const
{
	return (this->_gradeToExecute);
}

std::ostream &operator<<(std::ostream &os, AForm const &other)
{
	std::string res;

	if (other.getSigned())
		res = "yes";
	else
		res = "no";

	os << "AForm " << other.getName() << ", signed: " << res << ", grade to sign: " << other.getTosign() << ", grade to execute: " << other.getToExec();
	return os;
}
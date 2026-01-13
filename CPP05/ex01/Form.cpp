#include "Form.hpp"

Form::Form() : _name("gilbert"), _gradeToSign(22), _gradeToExecute(12)
{
	_signed = false;
}

Form::~Form() {}

Form::Form(const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->_signed = other._signed;
	return *this;
}


Form::Form(std::string name, int gradeTosign, int gradetoexecute) : _name(name), _gradeToSign(gradeTosign), _gradeToExecute(gradetoexecute)
{
	_signed = false;
	if (gradeTosign < 1 || gradetoexecute < 1)
		throw GradeTooHighException();
	if (gradeTosign > 150 || gradetoexecute > 150)
		throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= this->_gradeToSign)
		throw(GradeTooLowException());
	this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}
int Form::getTosign() const
{
	return (this->_gradeToSign);
}
int Form::getToExec() const
{
	return (this->_gradeToExecute);
}

std::ostream &operator<<(std::ostream &os, Form const &other)
{
	std::string res;

	if (other.getSigned())
		res = "yes";
	else
		res = "no";

	os << "Form " << other.getName() << ", signed: " << res << ", grade to sign: " << other.getTosign() << ", grade to execute: " << other.getToExec();
	return os;
}
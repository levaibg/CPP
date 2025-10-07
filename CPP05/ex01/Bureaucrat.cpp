#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("george"), _grade(15)
{
	this->_grade = 120;
	std::cout << "Base operatror called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Base destrucotr called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name("nick")
{
	std::cout << "Bureaucrat copy construcort called" << std::endl;
	*this = other;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Name construcotr called" << std::endl;

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "copy operator called" << std::endl;
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other)
{
	os << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getName() << " beacose " << e.what() << std::endl;
	}
}

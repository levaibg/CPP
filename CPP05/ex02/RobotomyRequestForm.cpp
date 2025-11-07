#include "RobotomyRequestForm.hpp"




RobotomyRequestForm::RobotomyRequestForm() : _name("megateon"), _gradeToSign(72), _gradeToExecute(45)
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string name): _name(name), _gradeToSign(72), _gradeToExecute(45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	this->_gradeToExecute = other._gradeToExecute;
	this->_gradeToSign = other._gradeToSign;
	this->_name = other._name;

	return(*this);
}



#pragma once

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		std::string getTarget(void) const;
		void execute(Bureaucrat const &executor) const;
		class FormNotSigned : public std::exception
		{
		public:
			const char *what() const throw();
		};
};

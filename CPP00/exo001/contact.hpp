#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class contact
{
	private :

	std::string name;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonnumber;
	std::string darkest_secrect;


	public : 
	// contact();
	// ~contact();
	std::string	setname(std:: string str);
	void	add_phb(void);
	void	display_data(void);
	std::string return_name(void);
	std::string return_fname(void);
	std::string return_nickname(void);
	std::string return_nnumber(void);
	std::string return_secrect(void);



};

#endif
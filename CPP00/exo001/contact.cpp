#include "contact.hpp"

#include <string>
#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

// contact::contact()
// {
//     name = "";
//     firstname = "";
// }
// contact::~contact()
// {
//     std::cout << "destrufted"<< std::endl;
// }
std::string    contact::setname(std::string str)
{
    return(str);
}



void    contact::add_phb(void)
{
    std::cout << "First name" << std::endl;
    std::getline(std::cin,firstname);
	if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
	while(firstname.empty())
	{
		std::cout << "wrong anwser"<<std::endl;
		std::getline(std::cin,firstname);
			if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
		if(!firstname.empty())
			break;
	}
    std::cout << "Last name" << std::endl;
    std::getline(std::cin,lastname);
		if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
    while(lastname.empty())
	{
		
		std::cout << "wrong anwser"<<std::endl;
			if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
		std::getline(std::cin,lastname);
		if(!lastname.empty())
			break;
	}
	std::cout << "nick name" << std::endl;
	std::getline(std::cin,nickname);
		if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
    while(nickname.empty())
	{
		std::cout << "wrong anwser"<<std::endl;
		if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
		std::getline(std::cin,nickname);
		if(!nickname.empty())
			break;
	}
	std::cout << "phone number" << std::endl;
    std::getline(std::cin,phonnumber);
    	if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
	while(phonnumber.empty())
	{
		std::cout << "wrong anwser"<<std::endl;
		std::getline(std::cin,phonnumber);
		if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
		if(!phonnumber.empty())
			break;
	}
	std::cout << "darkest secrect" << std::endl;
    std::getline(std::cin,darkest_secrect);
    	if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
	while(darkest_secrect.empty())
	{
		std::cout << "wrong anwser"<<std::endl;
		std::getline(std::cin,darkest_secrect);
		if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
		if(!darkest_secrect.empty())
			break;
	}
}



std::string contact::return_name(void){return(firstname);}

std::string contact::return_fname(void){return(lastname);}

std::string contact::return_nickname(void){return(nickname);}

std::string contact::return_nnumber(void){return(phonnumber);}

std::string contact::return_secrect(void){return(darkest_secrect);}





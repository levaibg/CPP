#include <string>
#include <iostream>
#include "phonebook.hpp"

phonebook::phonebook()
{
    name = "";
    firstname = "";
}
phonebook::~phonebook()
{
    std::cout << "destrufted"<< std::endl;
}
std::string    phonebook::setname(std::string str)
{
    return(str);
}

void    phonebook::add_phb(void)
{
    std::cout << "First name" << std::endl;
    std::getline(std::cin,firstname);

        std::cout << "Last name" << std::endl;
    std::getline(std::cin,lastname);
        std::cout << "nick name" << std::endl;
    std::getline(std::cin,nickname);

        std::cout << "phone number" << std::endl;
    std::getline(std::cin,phonnumber);

    std::cout << "darkest secrect" << std::endl;
    std::getline(std::cin,darkest_secrect);
    // phonebook
}

void    phonebook::display_data(void)
{
    std::cout << "First name : " <<firstname << std::endl;
    std::cout << "alst name : " <<lastname << std::endl;
    std::cout << "nick name : " <<nickname << std::endl;
    std::cout << "06 name : " <<phonnumber << std::endl;
    std::cout << "secrecy name : " <<darkest_secrect << std::endl;

}


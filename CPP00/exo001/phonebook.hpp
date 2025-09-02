#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>



class phonebook
{
    private :
    int     j;
    contact     contacte[8];
    int     counter;


    public : 
    phonebook();
    ~phonebook();
    void    add_info(void);
    void    display_data(void);
	void	user_info(int i);
	std::string		print_string(int i, int inf);
};


#endif

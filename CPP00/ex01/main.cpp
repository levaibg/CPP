#include <string>
#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"


int main(void)
{    
    phonebook lev;
    std::string caca;

    while(1)
    {
        std::getline(std::cin, caca);
        if(caca == "ADD")
            lev.add_phb();
        if(caca.empty())
        {
            std::cout << "Crtl D" << std::endl;
            return(0);
        }
        if(caca == "EXIT")
            break;
        if(caca == "SEARCH")
            lev.display_data();
    }
    return(1);
}
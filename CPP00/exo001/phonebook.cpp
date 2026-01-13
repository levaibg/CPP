#include "phonebook.hpp"

phonebook::phonebook()
{
	j = 0;
	counter = 0;
}
phonebook::~phonebook()
{

}

void	phonebook::add_info(void)
{   
	if(j < 8)
		j++;
	contacte[counter % 8].add_phb();
	counter++;
}

void	phonebook::user_info(int i)
{
	std::cout << "First name : " <<contacte[i].return_name() << std::endl;
	std::cout << "Last name : " <<contacte[i].return_fname() << std::endl;
	std::cout << "Nick name : " <<contacte[i].return_nickname() << std::endl;
	std::cout << "Phone number : " <<contacte[i].return_nnumber() << std::endl;
	std::cout << "Darkest secret : " <<contacte[i].return_secrect() << std::endl;
}

std::string		phonebook::print_string(int i, int inf)
{
	std::string str;

	if (inf == 0)
		str = contacte[i].return_name();
	else if(inf == 1)
		str = contacte[i].return_fname();
	else if(inf == 2)
		str = contacte[i].return_nickname();
	
	if(str.size() < 10)
		return(str);
	else
	{
		str = str.substr(0,9);
		str += '.';
	}
	return(str);
}



void	phonebook::display_data(void)
{
	std::string str;
	if(j == 0)
	{
		std::cout << "No info in database" << std::endl;
		return;
	}
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|	 Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

	}
	for(int i = 0; i < j; i++)
	{
		std::string str;
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << print_string(i, 0) << "|";
		std::cout << std::setw(10) << print_string(i, 1) << "|";
		std::cout << std::setw(10) << print_string(i, 2) << "|";
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Choose an index"<< std::endl;
	std::getline(std::cin, str);
	if(!std::cin)
	{
		std::cout << "Crtl D" << std::endl;
		exit(1);
	}
	if(str.size() > 1 || !std::isdigit(str[0]))
	{
		std::cout << "Invalid index"<< std::endl;
		return;
	}
	int res = stoi(str);
	if(std::isdigit(res) || res > j - 1)
	{
		std::cout << "invalid index"<<std::endl;
	}
	else
		user_info(res);
}
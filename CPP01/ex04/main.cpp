#include <fstream>
#include <string>
#include <iostream>


int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "Error arg : <Filename> <s1> <s2> " << std::endl;
		return(1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string Filename = av[1];
	std::string gnl;
	std::string result;
	std::string v_return;

	std::ifstream infile(Filename.c_str());
	if(!infile.is_open())
	{
		std::cout << "infile error" << std::endl;
		return(1);
	}
	std::ofstream outfile((Filename + ".repalce").c_str());
	while(std::getline(infile, gnl))
	{
		result = "";
		for(size_t i = 0; i < gnl.size();)
		{
			if(gnl.compare(i, s1.size(), s1) == 0)
			{
				result += s2;
				i += s1.size();
			}
			else
			{
				result += gnl[i];
				i++;
			}
			// v_return += result;
		}
		outfile << result<< std::endl;
		// std::cout << "Result :: " << result << std::endl;
	}
	return(0);

}

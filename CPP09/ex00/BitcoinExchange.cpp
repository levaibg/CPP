#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{

}
Bitcoin::~Bitcoin()
{
	
}
Bitcoin::Bitcoin(Bitcoin const &other)
{
	(void)other;
}

Bitcoin &Bitcoin::operator=(Bitcoin const &other)
{
	(void) other;
	return(*this);
}

static bool isLeapYear(int year)
{
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	if (year % 4 == 0)
		return true;
	return false;
}

static bool isValidDate(int year, int month, int day)
{
	if (month < 1 || month > 12)
		return false;
	if (day < 1)
		return false;

	if (month == 2)
	{
		if (isLeapYear(year))
			return day <= 29;
		return day <= 28;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return day <= 30;

	return day <= 31;
}

int Bitcoin::checkvalue(std::string str)
{
    int dot = 0;

    for (size_t i = 0; i < str.size(); i++)
    {
        if (std::isdigit(str[i]))
            continue;
        else if (str[i] == '.' && dot == 0)
            dot = 1;
        else if (std::isspace(str[i]))
            continue;
        else
            return 1;
    }
    return 0;
}


void Bitcoin::checkFile(std::string infile)
{
	// float totaldate;
    std::ifstream file(infile.c_str());
    std::string line;

    if (!file.is_open())
        throw std::runtime_error("Error: could not open file");

    std::getline(file, line);
    if (line != "date | value")
        throw std::runtime_error("Error: wrong header");

    while (std::getline(file, line))
    {
        size_t pipe = line.find(" | ");
        if (pipe == std::string::npos)
     	{
			std::cerr << "Error : Bad input =>" << line << std::endl;
			continue;
		}
        std::string date = line.substr(0, pipe);
        std::string value = line.substr(pipe + 3);

		if(value.size() != 1 || checkvalue(value) == 1)
		{
			std::cerr << "Error : Invalid value " << std::endl;
			continue;
		}
		// if(checkvalue(value))
		// {

		// }
		if(date.size() != 10)
		{
			std::cerr << "Error : Invalid date " << std::endl;
			continue;
		}
        size_t d1 = date.find('-');
        size_t d2 = date.find('-', d1 + 1);

        if (d1 == std::string::npos || d2 == std::string::npos)
        {
			std::cerr << "Error : Bad date => " << date << std::endl;
			continue;
		}

        int year = std::atoi(date.substr(0, d1).c_str());
        int month = std::atoi(date.substr(d1 + 1, d2 - d1 - 1).c_str());
        int day = std::atoi(date.substr(d2 + 1).c_str());
        float val = std::atof(value.c_str());

		std::map<std::string, float>::iterator it;
		if(val < 0)
		{
			std::cerr << "Error : Not a positive number " << std::endl;
			continue;
		}
		else if(val > 1000 )
		{
			std::cerr << "Error : too large number" << std::endl;
			continue;
		}
		if (year < 2009 || year > 2022 || !isValidDate(year, month, day))
		{
			std::cerr << "Error: invalid date" << std::endl;
			continue;
		}
		it = _rates.lower_bound(date);
		if (it == _rates.end())
		{
			--it;
		}
		else if (it->first != date && it != _rates.begin())
		{
			--it;
		}

		std::cerr << date << " => " << value << " = " << val * it->second << std::endl;


	}
}


void	Bitcoin::openCsv(void)
{
	std::string gnl;
	std::string date;
	std::string rate;
	size_t comma;
	

	std::ifstream database("data.csv");
	if(!database.is_open())
		throw std::runtime_error("Error : could not open data.csv");
	std::getline(database, gnl);
	while(std::getline(database, gnl))
	{
		comma = gnl.find(",");
		date = gnl.substr(0, comma);
		rate = gnl.substr(comma + 1);
		float rate2 = std::atof(rate.c_str());
		// std::cerr << "comma = " << comma << " date = " << date << " rate = " << rate2 << std::endl;
		_rates[date] = rate2;
	}
	// std::cerr << _rate[2020-02-25] << std::endl;

}
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

void    Bitcoin::checkFile(std::string infile)
{
    std::map<std::string, float>::iterator it;
    std::string gnl;

    std::ifstream file(infile.c_str());
    if(!file.is_open())
        throw std::runtime_error("Error : could not open given file");
    std::getline(file, gnl);
    // std::getline(file, gnl);
    if(gnl != "date | value")
        throw std::runtime_error("Error : Wrong file format");
    
    // std::string date = gnl.substr(0, 10);
    // float rate = std::atof(gnl.substr(13).c_str());
    // std::cout << "RATE :" << rate << std::endl;

}

void    Bitcoin::openCsv(void)
{
    std::string gnl;
    std::string date;
    std::string rate;
    size_t comma;

    std::ifstream database("data.csv");
    if(!database.is_open())
        throw std::runtime_error("Error : could not open data.csv");

    while(std::getline(database, gnl))
    {
        comma = gnl.find(",");
        date = gnl.substr(0, comma);
        rate = gnl.substr(comma + 1);

        float rate2 = std::atof(rate.c_str());
        // std::cout << "comma = " << comma << " date = " << date << " rate = " << rate2 << std::endl;
        _rates[date] = rate2;
    }
    // std::cout << _rate[2020-02-25] << std::endl;

}
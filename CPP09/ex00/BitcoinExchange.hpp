#pragma once

#include <iostream>	
#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>
#include <climits>
#include <stdint.h> 
#include <algorithm>
#include <stack>
#include <fstream>
#include <map>


class Bitcoin
{
    private:
    std::map<std::string, float> _rates;

    public : 
    Bitcoin();
    ~Bitcoin();
    Bitcoin &operator=(Bitcoin const &other);
    Bitcoin(const Bitcoin &other);
    void    checkFile(std::string infile);
    void    openCsv(void);
   
};
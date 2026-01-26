#include "RNP.hpp"


RNP::RNP()
{

}
RNP::~RNP()
{

}

RNP::RNP(RNP const &other)
{
	(void)other;
}

RNP &RNP::operator=(RNP const &other)
{
	(void)other;
	return(*this);
}

int isSign(char input)
{
	std::cout << input << std::endl;
	if(input == '+' || input == '-' || input == '/' || input == '*')
		return(1);
	return(0);
}

void	RNP::set(int numb)
{
	this->stack.push(numb);
}

void RNP::checksign(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (std::isdigit(str[i]))
            set(str[i] - '0');
        else if (isSign(str[i]))
            sorting(str[i]);
        else if (!std::isspace(str[i]))
            throw std::runtime_error("Error");
    }
	std::cout << "res = " << this->stack.top() << std::endl;
}

void	RNP::sorting(int sign)
{
	int a;
	int b;
	int res;

	if(this->stack.size() < 2)
		throw std::runtime_error("Error : ");
	a = this->stack.top();
	this->stack.pop();
	b = this->stack.top();
	this->stack.pop();
	if(sign == '+')
		res = b + a;
	else if(sign == '-')
		res = b - a;
	else if(sign == '/')
	{
		if(a == 0)
	        throw std::runtime_error("Error: division by zero");
		res = b / a;
	}
	else if(sign == '*')
		res = b * a;
	// std::cout << "calc = a " << a << " " << sign << "  b = " << b <<std::endl;
	this->stack.push(res);
}


#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(PmergeMe const &other){(void)other;}

PmergeMe &PmergeMe::operator=(PmergeMe const &other){(void) other; return(*this);}


void	PmergeMe::algo(std::string str)
{
	(void)str;
}

void	PmergeMe::checkArgs(std::string s)
{
	if (s.empty())
		throw std::invalid_argument("Error: Empty argument");

	for (size_t i = 0; i < s.length(); i++)
	{
		if (!isdigit(s[i]))
		{
			if (i == 0 && s[i] == '+')
				continue;
			throw std::invalid_argument("Error: Non-numeric or negative found");
		}
	}	

}

int issorted(std::vector<int> baser)
{
	for(size_t i = 0; i < baser.size(); i += 2)
	{
		if(baser[i] > baser[i + 1])
			return(1);
	}
	return(0);
}

std::vector<int>	PmergeMe::setFirstStack(std::vector<int> bigBase)
{
	(void)bigBase;
	std::vector<int> big;
	std::vector<int> small;
	// bigBase = _vec;
	int side = -1;
	// std::cout << "Last :: " << _vec[_vec.size()] << std::endl;
	if(bigBase.size() % 2 != 0)
	{
		side = bigBase.back();
		bigBase.pop_back();
	}
	if (bigBase.size() <= 1)
		return bigBase;
	for (size_t i = 0; i + 1 < bigBase.size(); i += 2)
	{
		if(bigBase[i] > bigBase[i +1])
		{
			big.push_back(bigBase[i]);
			small.push_back(bigBase[i + 1]);
		}
		else
		{
			big.push_back(bigBase[i + 1]);
			small.push_back(bigBase[i]);
		}
	}
	if(side != -1)
		big.push_back(side);
	for (size_t i = 0; i < big.size(); i ++)
		std::cout << " BIg stack first = " << big[i] << std::endl;
	for (size_t i= 0 ; i < small.size(); i ++)
		std::cout << " small stack first = " << small[i] << std::endl;
	if(big.size() > 1)
		big = setFirstStack(big);
	return(big);
}

int	PmergeMe::jacubstall(int index)
{
	if(index == 0)
		return(0);
	if(index == 1)
		return(1);

	int res1 = 1;
	int res2 = -1;
	for(int i = 0; i < index; i++)
	{
		res1 *= 2;
		res2 *= -1;
	}
	// std::cout << "res1 = " << res1 << std::endl;
	int res3 = res1 + res2;
	// std::cout << "res2 = " << res3 << std::endl;
	return(res3 / 3);

}

void	PmergeMe::setStack1(int numb)
{

	std::cout << "kebab : numb " <<  numb <<std::endl;
	this->_vec.push_back(numb);
	// setFirstStack(_vec);

}

std::vector<int> PmergeMe::getVect(void)
{
	return(_vec);
}

void	binarySearch(std::vector<int> vec, int index)
{
	size_t vecSize = vec.size();
	if(index > vecSize)
		throw std::invalid_argument("Error: error");
	size_t binary = vecSize / 2;
	if(index > binary)
		
	
}
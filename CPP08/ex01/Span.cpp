#include "Span.hpp"

Span::Span()
{
    srand(time(NULL));

}
Span::Span(unsigned int N)
{
    srand(time(NULL));
    _indent = 0;
	this->_maxSize = N;
}
Span::~Span()
{

}

Span::Span(const Span &other)
{
    _numbers = other._numbers;
    _maxSize = other._maxSize;
    _indent = other._indent;
}

Span &Span::operator=(const Span &other)
{
        srand(time(NULL));

    if (this != &other)
    {
        _numbers = other._numbers;
        _maxSize = other._maxSize;
        _indent = other._indent;
    }
    return *this;
}

void Span::addNumber(int numb)
{
    if(_indent >= _maxSize)
        throw indexTooHigh();
	
    _numbers.push_back(numb);
    _indent++;
}

int    Span::longestSpan(void) const
{
    int ltn;
    int htn;
    if(_indent < 2)
        throw vectorSize();
    ltn = *std::min_element(_numbers.begin(), _numbers.end());
    htn = *std::max_element(_numbers.begin(), _numbers.end());
    return(htn - ltn);
}

int    Span::shortestSpan(void) const
{
    if (_numbers.size() < 2)
        throw vectorSize();
    std::vector<int> tmp;
    tmp = this->_numbers;
    std::sort(tmp.begin(), tmp.end());
    int res1 = tmp[1] - tmp[0];
    for(unsigned int i = 1; i < tmp.size(); i++)
    {
        int res2;
        res2 = tmp[i] - tmp [i - 1];
        if(res2 < res1)
            res1 = res2;
    }
    return(res1);
}


void Span::addRange(void)
{
    while (_indent < _maxSize)
        addNumber(rand() % 100000);
}



void Span::printVector(void)
{
    for (unsigned int i = 0; i < _numbers.size(); ++i)
    {
        std::cout << _numbers[i] << "\t";

        if ((i + 1) % 12 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
}

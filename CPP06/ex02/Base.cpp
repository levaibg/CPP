#include "Base.hpp"

Base::Base()
{

}

Base::~Base()
{

}

Base::Base(Base const &other)
{
	*this = other;
}

Base &Base::operator=(const Base &other)
{
	(void)other;
	return(*this);
}


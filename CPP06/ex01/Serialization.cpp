#include "Serialization.hpp"


Serialization::Serialization()
{
}

Serialization::~Serialization()
{
}
Serialization::Serialization(Serialization const &other)
{
	*this = other;
}

Serialization &Serialization::operator=(Serialization const &other)
{
	(void)other;
	return(*this);
}


uintptr_t Serialization::serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

#include <cstdlib> // pour srand et rand
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
	Base *res;

	std::srand(std::time(NULL));
	int i = std::rand() % 3;
	std::cout << i << std::endl;

	if (i == 0)
		res = new A;
	else if (i == 1)
		res = new B;
	else
		res = new C;
	return(res);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "The type is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The type is B" << std::endl;
	else
		std::cout << "The type is C" << std::endl;
}

void identify(Base &p)
{

	try
	{
		Base &a = dynamic_cast<A &>(p);
		std::cout << "reference type is A" << std::endl;
		(void)a;
	}
	catch (std::exception var)
	{
	}
	try
	{
		Base &a = dynamic_cast<B &>(p);
		(void)a;
		std::cout << "reference type is B" << std::endl;
	}
	catch (std::exception var)
	{
	}

	try
	{
		Base &a = dynamic_cast<C &>(p);
		(void)a;
		std::cout << "reference type is C" << std::endl;
	}
	catch (std::exception var)
	{
	}
}

int main(void)
{

	Base *res = generate();

	identify(res);
	identify(res);
	delete res;
}

// Data data;
// 	uintptr_t value;
// 	Data *data2;

// 	data.a = 42;
// 	data.b = 55;

// 	std::cout << "Value of a and b before Serialization :  " << data.a << " | " <<  data.b << std::endl;
// 	std::cout << "Adress before Serialization : " << &data << std::endl;

// 	value = Serialization::serialize(&data);
// 	data2 = Serialization::deserialize(value);

// 	std::cout << "Value of a and b after deserialization : " << data2->a << " | " <<  data2->b << std::endl;
// 	std::cout << "Adress after deserialization : " << &data2 << std::endl;
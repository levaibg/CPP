#include "Serialization.hpp"

int main(void)
{
	Data data;
	uintptr_t value;
	Data *data2;
	
	data.a = 42;
	data.b = 55;

	std::cout << "Value of a and b before Serialization :  " << data.a << " | " <<  data.b << std::endl;
	std::cout << "Adress before Serialization : " << &data << std::endl;

	value = Serialization::serialize(&data);
	data2 = Serialization::deserialize(value);

	std::cout << "Value of a and b after deserialization : " << data2->a << " | " <<  data2->b << std::endl;
	std::cout << "Adress after deserialization : " << &data2 << std::endl;

}
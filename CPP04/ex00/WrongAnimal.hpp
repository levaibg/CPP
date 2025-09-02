#include "Animal.hpp"


class WrongAnimal
{

	protected :
	std::string _type;

	public :
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	void makeSound() const;
	WrongAnimal &operator=(const WrongAnimal &other);
	std::string getType() const;

};
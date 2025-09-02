#include "Animal.hpp"

class Cat : public Animal
{
	private:
		
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		void makeSound() const;
		Cat &operator=(const Cat &other);
		std::string getType() const;
};



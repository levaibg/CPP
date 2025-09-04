#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		void makeSound() const;
		Cat &operator=(const Cat &other);
		std::string getType() const;
};



#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &other);
		void makeSound() const;
		WrongCat &operator=(const WrongCat &other);
		std::string getType() const;
};



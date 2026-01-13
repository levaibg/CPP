#pragma once

#include <string>
#include <iostream>


class Weapon
{
	private:
		std::string _type;

	public:
		const std::string getType(void);
		void	setType(std::string str);
		Weapon(std::string typew);
		Weapon();
		~Weapon();

};
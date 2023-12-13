#pragma once
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public :
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal& ref);
	WrongAnimal& operator=(const WrongAnimal& ref);
	std::string	getType() const;
	void	makeSound() const;
};

#pragma once
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
public :
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& ref);
	WrongCat& operator=(const WrongCat& ref);
	void	makeSound() const;
};

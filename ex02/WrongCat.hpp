#pragma once
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
private :
	Brain*	brain;
public :
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& ref);
	WrongCat& operator=(const WrongCat& ref);
	void	makeSound() const;
};

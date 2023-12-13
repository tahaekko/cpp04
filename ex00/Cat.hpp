#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
public :
	Cat();
	~Cat();
	Cat(const Cat& ref);
	Cat& operator=(const Cat& ref);
	void	makeSound() const;
};

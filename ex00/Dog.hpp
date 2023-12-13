#pragma once
#include "Animal.hpp"
#include <iostream>


class Dog : public Animal
{
public :
	Dog();
	~Dog();
	Dog(const Dog& ref);
	Dog& operator=(const Dog& ref);
	void	makeSound() const;
};

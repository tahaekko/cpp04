#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>


class Dog : public Animal
{
private :
	Brain*	brain;
public :
	Dog();
	~Dog();
	Dog(const Dog& ref);
	Dog& operator=(const Dog& ref);
	void	makeSound() const;
	Brain*	getBrain();
};

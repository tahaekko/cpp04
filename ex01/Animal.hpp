#pragma once
#include <iostream>

class Animal
{
protected:
	std::string type;
public :
	Animal();
	virtual ~Animal();
	Animal(const Animal& ref);
	Animal& operator=(const Animal& ref);
	std::string	getType() const;
	virtual void	makeSound() const;
};

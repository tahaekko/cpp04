#include "Animal.hpp"

 //construct
 Animal::Animal()
{
 	std::cout<< "\e[1;32mAnimal Constructor called\e[0m" << std::endl;
	this->type = "Default";
 }
 //Destructor
 Animal::~Animal()
 {
 	std::cout<< "\e[1;31mAnimal Destructor called\e[0m" << std::endl;
 }
 //Cpy Constructor
 Animal::Animal(const Animal& ref)
 {
 	*this = ref;
 	std::cout<< "Animal copy constructor called" << std::endl;
 }
 //Copy assignement operator
 Animal& Animal::operator=(const Animal& ref)
 {
 	std::cout<< "Animal copy assignment operator called" << std::endl;
	this->type = ref.type;
 	return (*this);
 }

void	Animal::makeSound() const
{
	std::cout << "Default Sound\n";
	return ;
}

std::string	Animal::getType() const
{
	return this->type;
}

#include "WrongAnimal.hpp"

 //construct
 WrongAnimal::WrongAnimal()
{
 	std::cout<< "WrongAnimal Constructor called" << std::endl;
	this->type = "Default";
 }
 //Destructor
 WrongAnimal::~WrongAnimal()
 {
 	std::cout<< "WrongAnimal Destructor called" << std::endl;
 }
 //Cpy Constructor
 WrongAnimal::WrongAnimal(const WrongAnimal& ref)
 {
 	*this = ref;
 	std::cout<< "WrongAnimal copy constructor called" << std::endl;
 }
 //Copy assignement operator
 WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
 {
 	std::cout<< "WrongAnimal copy assignment operator called" << std::endl;
	this->type = ref.type;
 	return (*this);
 }

void	WrongAnimal::makeSound() const
{
	std::cout << "Default Sound\n";
	return ;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

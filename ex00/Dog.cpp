#include "Dog.hpp"

 //construct
 Dog::Dog()
{
 	std::cout<< "\e[32mDog Constructor called\e[0m" << std::endl;
	this->type = "Dog";
 }
 //Destructor
 Dog::~Dog()
 {
 	std::cout<< "\e[31mDog Destructor called\e[0m" << std::endl;
 }
 //Cpy Constructor
 Dog::Dog(const Dog& ref)
 {
 	*this = ref;
 	std::cout<< "Dog copy constructor called" << std::endl;
 }
 //Copy assignement operator
 Dog& Dog::operator=(const Dog& ref)
 {
 	std::cout<< "Dog copy assignment operator called" << std::endl;
	this->type = ref.type;
 	return (*this);
 }

void	Dog::makeSound() const
{
	std::cout << "Bark\n";
}

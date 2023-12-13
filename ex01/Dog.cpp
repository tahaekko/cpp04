#include "Dog.hpp"

 //construct
 Dog::Dog()
{
 	std::cout<< "\e[32mDog Constructor called\e[0m" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
 }
 //Destructor
 Dog::~Dog()
 {
 	std::cout<< "\e[31mDog Destructor called\e[0m" << std::endl;
	delete this->brain;
 }
 //Cpy Constructor
 Dog::Dog(const Dog& ref)
 {
 	std::cout<< "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
 	*this = ref;
 }
 //Copy assignement operator
 Dog& Dog::operator=(const Dog& ref)
 {
 	std::cout<< "Dog copy assignment operator called" << std::endl;
	*this->brain = *ref.brain;
	this->type = ref.type;
 	return (*this);
 }

void	Dog::makeSound() const
{
	std::cout << "Bark\n";
}

Brain* Dog::getBrain()
{
	return (this->brain);
}

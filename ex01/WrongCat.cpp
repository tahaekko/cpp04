#include "WrongCat.hpp"

 //construct
 WrongCat::WrongCat()
{
 	std::cout<< "\e[32mWrongCat Constructor called\e[0m" << std::endl;
	this->brain = new Brain();
	this->type = "WrongCat";
 }
 //Destructor
 WrongCat::~WrongCat()
 {
 	std::cout<< "\e[31mWrongCat Destructor called\e[0m" << std::endl;
	delete this->brain;
 }
 //Cpy Constructor
 WrongCat::WrongCat(const WrongCat& ref)
 {
 	*this = ref;
 	std::cout<< "WrongCat copy constructor called" << std::endl;
 }
 //Copy assignement operator
 WrongCat& WrongCat::operator=(const WrongCat& ref)
 {
 	std::cout<< "WrongCat copy assignment operator called" << std::endl;
	 this->type = ref.type;
 	return (*this);
 }

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meao\n";
}

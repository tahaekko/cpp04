#include"Cat.hpp"

//construct
Cat::Cat()
{
	std::cout << "\e[32mCat Constructor called\e[0m" << std::endl;
	this->type= "Cat";
}

//Destructor
Cat::~Cat()
{
	std::cout << "\e[31mCat Destructor called\e[0m" << std::endl;
}

//Cpy Constructor
Cat::Cat(const Cat& ref)
{
	*this = ref;
	std::cout << "Cat copy constructor called" << std::endl;
}
//Copy assignement operator
Cat& Cat::operator=(const Cat& ref)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = ref.type;
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << "Meao\n";
}

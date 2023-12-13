#include"Cat.hpp"

//construct
Cat::Cat()
{
	std::cout << "\e[32mCat Constructor called\e[0m" << std::endl;
	this->brain = new Brain();
	this->type= "Cat";
}

//Destructor
Cat::~Cat()
{
	std::cout << "\e[31mCat Destructor called\e[0m" << std::endl;
	delete this->brain;
}

//Cpy Constructor
Cat::Cat(const Cat& ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = ref;
}
//Copy assignement operator
Cat& Cat::operator=(const Cat& ref)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	*this->brain = *ref.brain;
	this->type = ref.type;
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << "Meao\n";
}

Brain* Cat::getBrain()
{
	return (this->brain);
}

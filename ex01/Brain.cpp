#include "Brain.hpp"

//construct
Brain::Brain()
{
	std::cout<< "\e[35mBrain is constructed\e[0m" << std::endl;
}
 //Destructor
Brain::~Brain()
{
	std::cout<< "\e[35mBrain is Destructed\e[0m" << std::endl;
}
//Cpy Constructor
Brain::Brain(const Brain& ref)
{
	std::cout<< "Brain copy constructor called" << std::endl;
	*this = ref;
}
//Copy assignement operator
Brain& Brain::operator=(const Brain& ref)
{
	std::cout<< "Brain copy assignment operator called" << std::endl;
	for (int i =0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
	return (*this);
}

std::string* Brain::getIdeas()
{
	return (this->ideas);
}

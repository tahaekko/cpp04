#pragma once
#include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public :
	Brain();
	~Brain();
	Brain(const Brain& ref);
	Brain& operator=(const Brain& ref);
	std::string* getIdeas();
};

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

void	WrongTest()
{
	WrongAnimal *anim = new WrongCat();
	anim->getType();
	anim->makeSound();
	delete anim;
}

void	brainFill(Brain* brain)
{
	std::string* ref = brain->getIdeas();

	for (int i =0 ; i < 25;i++)
		ref[i] = "1";
	for (int i =25 ; i < 50;i++)
		ref[i] = "2";
	for (int i =50 ; i < 75;i++)
		ref[i] = "3";
	for (int i =75 ; i < 100;i++)
		ref[i] = "4";
}

void BrainCopyCat()
{
	Cat *cat = new Cat();
	brainFill(cat->getBrain());

	Cat *newCat = new Cat();

	*newCat = *cat;
	for (int i = 0; i < 100 ; i++)
		std::cout << newCat->getBrain()->getIdeas()[i] << std::endl;
	delete newCat;
	delete cat;
}

void BrainCopyDog()
{
	Dog *dog = new Dog();
	brainFill(dog->getBrain());

	Dog *newDog = new Dog();

	*newDog = *dog;
	for (int i = 0; i < 100 ; i++)
		std::cout << newDog->getBrain()->getIdeas()[i] << std::endl;
	delete newDog;
	delete dog;
}

void	testOneCat()
{
	Cat *cat = new Cat();
	for (int i = 0; i < 50;i++)
		cat->getBrain()->getIdeas()[i] = "lol";
	for (int i = 50; i < 100;i++)
		cat->getBrain()->getIdeas()[i] = "ZZ";
	{
		Cat *tmp = new Cat();
		*tmp = *cat;


	for (int i = 0; i < 50;i++)
		std::cout << tmp->getBrain()->getIdeas()[i] << std::endl;
	for (int i = 50; i < 100;i++)
		std::cout << tmp->getBrain()->getIdeas()[i] << std::endl;
		delete tmp;
	}
	delete cat;
}

void	testOneDog()
{
	Dog *dog = new Dog();
	for (int i = 0; i < 50;i++)
		dog->getBrain()->getIdeas()[i] = "lol";
	for (int i = 50; i < 100;i++)
		dog->getBrain()->getIdeas()[i] = "ZZ";
	{
		Dog *tmp = new Dog();
		*tmp = *dog;


	for (int i = 0; i < 50;i++)
		std::cout << tmp->getBrain()->getIdeas()[i] << std::endl;
	for (int i = 50; i < 100;i++)
		std::cout << tmp->getBrain()->getIdeas()[i] << std::endl;
		delete tmp;
	}
	delete dog;
}

int main()
{
	int size = 2;
	const Animal* animal[size];

	for (int i = 0; i < size/2 ; i++)
		*(animal + i) = new Cat();

	for (int i = size/2; i < size ; i++)
		*(animal + i) = new Dog();

	for (int i =0; i < size; i++)
		(*(animal + i))->makeSound();

	for (int i = 0; i < size/2 ; i++)
		delete *(animal + i);

	for (int i = size/2; i < size ; i++)
		delete *(animal + i);

	Dog basic;
	{
	Dog tmp = basic;
	}
	return 0;
}

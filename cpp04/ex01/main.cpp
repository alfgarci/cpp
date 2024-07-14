#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Examples 1->" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "Examples 2->" << std::endl;
	Animal* animals[4];
	for (int k = 0; k < 2; ++k)
	{
		animals[k] = new Dog();
	}
	for (int k = 2; k < 4; ++k)
	{
		animals[k] = new Cat();
	}
	for (int k = 0; k < 4; ++k)
	{
		delete animals[k];
	}
	return 0;
}
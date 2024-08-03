#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Examples 1->" << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	//const AAnimal* not_possible = new AAnimal();

	delete i;
	delete j;

	std::cout << std::endl;
	std::cout << "Examples 2->" << std::endl;
	AAnimal* animals[4];
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
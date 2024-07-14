#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "Goods Test ->" << std::endl; 
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << std::endl;
    std::cout << "Bads Test ->" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << wrong_meta->getType() << " " << std::endl;
    std::cout << wrong_cat->getType() << " " << std::endl;
    wrong_meta->makeSound();
    wrong_cat->makeSound();

    delete wrong_meta;
    delete wrong_cat;

    return 0;
}

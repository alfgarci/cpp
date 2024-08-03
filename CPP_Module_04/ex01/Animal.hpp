#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();

	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	virtual void	makeSound() const;
	std::string		getType() const; 
};

#endif
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;

public:
	AAnimal();
	AAnimal(std::string type);
	virtual ~AAnimal();

	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);

	virtual void	makeSound() const = 0;
	std::string		getType() const; 
};

#endif
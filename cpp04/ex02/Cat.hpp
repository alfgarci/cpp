#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
	Brain *_brain;

public:
	Cat();
	~Cat();
	
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);

	void   makeSound() const;
};

#endif
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	brain = new Brain();
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	delete brain;
	std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}
void WrongCat::makeSound() const
{
	std::cout << "Guau!" << std::endl;
}
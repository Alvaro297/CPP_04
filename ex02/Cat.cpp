#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Brain* Cat::getBrain() const { return (brain);}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	if (brain)
		delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const { return ("Cat");}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl;}
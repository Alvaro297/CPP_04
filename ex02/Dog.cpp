#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Brain* Dog::getBrain() const { return (brain);}

Dog::Dog(const Dog& other) : AAnimal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	if (brain)
		delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
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

std::string Dog::getType() const { return ("Dog");}

void Dog::makeSound() const { std::cout << "Guau!" << std::endl;}
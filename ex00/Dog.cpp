#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType() const { return ("Dog");}

void Dog::makeSound() const
{
	std::cout << "Guau!" << std::endl;
}
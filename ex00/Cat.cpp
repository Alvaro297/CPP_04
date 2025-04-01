#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const { return ("Cat");}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
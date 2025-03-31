# include "Animal.hpp"

Animal::Animal(std::string animalType) : type(animalType)
{
	std::cout << "Animal constructor called with type: " << type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destroyed object animal" << std::endl;
}

std::string Animal::getType(){ return (type);}

void Animal::makeSound()
{
	std::cout << "Generic animal sound" << std::endl;
}
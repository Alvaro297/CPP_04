# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string animalType) : type(animalType)
{
	std::cout << "Wrong animal constructor called with type: " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroyed object wrong animal" << std::endl;
}

std::string WrongAnimal::getType(){ return (type);}

void WrongAnimal::makeSound()
{
	std::cout << "Wrong animal sound" << std::endl;
}
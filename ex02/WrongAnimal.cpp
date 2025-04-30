# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string animalType) : type(animalType)
{
	std::cout << "Wrong animal constructor called with type: " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroyed object wrong animal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string WrongAnimal::getType() const { return (type);}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal sound" << std::endl;
}
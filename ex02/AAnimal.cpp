# include "AAnimal.hpp"

std::string AAnimal::getType() const { return (type);}

AAnimal::AAnimal(std::string AanimalType) : type(AanimalType)
{
	std::cout << "AAnimal constructor called with type: " << type << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Destroyed object Aanimal" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "Generic Aanimal sound" << std::endl;
}
# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string animalType) : type(animalType)
{
	std::cout << "Wrong animal constructor called with type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
std::cout << "WrongAnimal copy constructor called: " << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroyed object wrong animal" << std::endl;
}

std::string WrongAnimal::getType() const { return (type);}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal sound" << std::endl;
}
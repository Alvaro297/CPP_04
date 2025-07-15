# include "Animal.hpp"

Animal::Animal(std::string animalType) : type(animalType)
{
	std::cout << "Animal constructor called with type: " << type << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called: " << type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destroyed object animal" << std::endl;
}

std::string Animal::getType() const { return (type);}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}
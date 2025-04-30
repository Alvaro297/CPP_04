# include "Animal.hpp"

std::string Animal::getType() const { return (type);}
Brain* Animal::getBrain() const { return (brain);}

Animal::Animal(std::string animalType) : type(animalType)
{
	std::cout << "Animal constructor called with type: " << type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destroyed object animal" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}
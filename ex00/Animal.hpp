#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal(std::string animalType = "Generic Animal");
	Animal(const Animal& other);
	Animal& operator=(const Animal& other); 
	virtual ~Animal();
	virtual std::string getType() const;
	virtual void makeSound() const;
};

#endif
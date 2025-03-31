#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(std::string animalType = "Generic Animal");
	virtual ~Animal();
	std::string getType();
	virtual void makeSound();
};

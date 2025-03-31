#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(std::string animalType = "Generic Animal");
	virtual ~WrongAnimal();
	std::string getType();
	virtual void makeSound();
};

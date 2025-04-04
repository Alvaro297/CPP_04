#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(std::string animalType = "Generic Animal");
	virtual ~Animal();
	virtual std::string getType() const;
	virtual void makeSound() const;
};

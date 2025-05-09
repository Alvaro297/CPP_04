#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(std::string animalType = "Generic Animal");
    virtual ~WrongAnimal();
    std::string getType() const;
    virtual void makeSound() const;
};

#endif
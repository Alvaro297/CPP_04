#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class WrongAnimal
{
protected:
    std::string type;
    Brain *brain;
public:
    WrongAnimal(std::string animalType = "Generic Animal");
    virtual ~WrongAnimal();
    std::string getType() const;
    virtual void makeSound() const;
};

#endif
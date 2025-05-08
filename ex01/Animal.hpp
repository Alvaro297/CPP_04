#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;
    Brain *brain;
public:
    Animal(std::string animalType = "Generic Animal");
    virtual ~Animal();
    virtual Animal& operator=(const Animal& other);
    virtual std::string getType() const;
    virtual void makeSound() const = 0;
    virtual Brain* getBrain() const;
};

#endif
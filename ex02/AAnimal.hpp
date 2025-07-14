#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal(std::string AanimalType = "Generic AAnimal");
    virtual ~AAnimal();
    virtual AAnimal& operator=(const AAnimal& other);
    virtual std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif
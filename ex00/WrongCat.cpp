#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongCat - " << type << " assignment operator called." << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Gaau!" << std::endl;
}
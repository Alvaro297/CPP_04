# include "AMateria.hpp"

AMateria::AMateria(std::string type)
{
	std::cout << "AMateria constructor called: " << type << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << type << std::endl;
}
std::string AMateria::getType(){ return (type);}


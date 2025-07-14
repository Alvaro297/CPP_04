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

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria is used :)" << std::endl;
}
const std::string& AMateria::getType() const { return type; }


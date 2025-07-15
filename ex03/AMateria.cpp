# include "AMateria.hpp"

AMateria::AMateria(std::string type)
{
	std::cout << "AMateria constructor called: " << type << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria constructor called: " << type << std::endl;
	this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
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


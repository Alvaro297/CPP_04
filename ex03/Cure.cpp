# include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots a Cure bolt at " << target.getName() << " *" << std::endl;
}
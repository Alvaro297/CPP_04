#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	std::string const & getType() const;
};

#endif
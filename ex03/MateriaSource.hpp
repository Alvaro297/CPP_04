# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* materiaTemplates[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};


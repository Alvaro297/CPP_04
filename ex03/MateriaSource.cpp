# include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
	std::cout << "Called destructor of MateriaSource" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if (materiaTemplates[i])
			delete (materiaTemplates[i]);
}

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		materiaTemplates[i] = NULL;
	std::cout << "MateriaSource constructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia doesnt exist" << std::endl;
		return ;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (!materiaTemplates[i])
		{
			materiaTemplates[i] = m->clone();
			std::cout << "Materia learned in space " << i << "." << std::endl;
			return ;
		}
	}
	delete (m);
	std::cout << "Materia cant be learned bcs I dont have space" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materiaTemplates[i] && materiaTemplates[i]->getType() == type)
			return (materiaTemplates[i]->clone());
	}
	return (NULL);
}
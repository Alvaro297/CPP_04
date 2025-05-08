# include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	for (size_t i = 0; i < 4; i++)
		spells[i] = nullptr;
}

Character::~Character()
{
	std::cout << "Called destructor of Character" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if (spells[i])
			delete spells[i];
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Error: Cannot equip a null materia." << std::endl;
		return;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (!spells[i])
		{
			spells[i] = m;
			std::cout << "Equipped materia in slot " << i << "." << std::endl;
			return;
		}
	}
	std::cout << "Error: No available slots to equip materia." << std::endl;
}

void Character::unequip(int ptr)
{
	switch (ptr) {
	case 1:
	case 2:
	case 3:
	case 4:
		if (spells[ptr])
		{
			std::cout << "Unequipped materia from slot " << ptr << "." << std::endl;
			spells[ptr] = nullptr;
		}
		else
			std::cout << "Error: Slot " << ptr << " is already empty." << std::endl;
		break;
	default:
		std::cout << "Error: Invalid slot index. Must be between 1 and 4." << std::endl;
		break;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		std::cout << "Error: Invalid slot index. Must be between 0 and 3." << std::endl;
	else
	{
		if (spells[idx])
			spells[idx]->use(target);
		else
			std::cout << "Error: No materia equipped in slot" << std::endl;
	}
}
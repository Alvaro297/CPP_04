# include "Animal.hpp"

class Dog : public Animal
{
private:
public:
	Dog();
	~Dog();
	std::string getType() const;
	void makeSound() const override;
};


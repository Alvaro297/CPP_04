# include "Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat();
	~Cat();
	std::string getType() const;
	void makeSound() const override;
};


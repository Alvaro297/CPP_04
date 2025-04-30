# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	std::string getType() const;
	void makeSound() const override;
};


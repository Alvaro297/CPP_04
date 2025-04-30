# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	~WrongCat();
	WrongCat& operator=(const WrongCat& other);
	void makeSound() const override;
};

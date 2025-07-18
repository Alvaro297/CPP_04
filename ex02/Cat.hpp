#ifndef CAT_HPP
#define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain *brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    std::string getType() const;
    void makeSound() const;
    Brain *getBrain() const;
};

#endif
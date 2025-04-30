#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
	std::cout << "=== CREACIÓN ===" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "=== SONIDOS ===" << std::endl;
	dog->makeSound(); // Debe ladrar
	cat->makeSound(); // Debe maullar

	std::cout << "=== DESTRUCCIÓN ===" << std::endl;
	delete dog;
	delete cat;

	std::cout << "\n=== DEEP COPY ===" << std::endl;
	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "Cazar pelotas");
	Dog copyDog = originalDog;
	copyDog.getBrain()->setIdea(0, "Dormir");

	std::cout << "Original: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy:     " << copyDog.getBrain()->getIdea(0) << std::endl;

	return 0;
}

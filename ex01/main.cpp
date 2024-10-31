#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal *animals[42];

	for (size_t i = 0; i < 21; i++)
		animals[i] = new Cat();
	for (size_t i = 21; i < 42; i++)
		animals[i] = new Dog();

	for (size_t i = 0; i < 42; i++) {
		animals[i]->makeSound();
		delete animals[i];
	}

	Cat minou;
	{
		Cat evilMinou;
		for (size_t i = 0; i < 100; i++) {
			std::string idea;
			switch (i % 3) {
			case 0:
				idea = "Eat";
				break ;
			case 1:
				idea = "Sleep";
				break ;
			case 2 :
				idea = "Dominate the world";
				break ;
			}
			evilMinou.getBrain()->setIdea(i, idea);
		}
		minou = evilMinou;
	}
	std::cout << minou.getBrain()->getIdea(0) << ", " << minou.getBrain()->getIdea(1) << " and " << minou.getBrain()->getIdea(2) << std::endl;
}

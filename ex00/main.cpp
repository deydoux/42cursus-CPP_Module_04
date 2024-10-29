#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *wmeta = new WrongAnimal();
	const WrongAnimal *wj = new WrongDog();
	const WrongAnimal *wi = new WrongCat();

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << wmeta->getType() << std::endl;
	std::cout << wj->getType() << std::endl;
	std::cout << wi->getType() << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	wmeta->makeSound();
	wi->makeSound();
	wj->makeSound();
}

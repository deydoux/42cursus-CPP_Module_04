#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cerr << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other) {
	std::cerr << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cerr << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cerr << "Cat copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cerr << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
	std::cerr << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cerr << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cerr << "Dog copy assignement operator called" << std::endl;
	Animal::operator=(rhs);
	return (*this);
}

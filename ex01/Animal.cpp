#include "Animal.hpp"

Animal::Animal(): _type("Unknown") {
	std::cerr << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cerr << _type << " Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type) {
	std::cerr << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cerr << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	std::cerr << "Animal copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Unknown sound" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Unknown") {
	std::cerr << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type) {
	std::cerr << _type << " AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other): _type(other._type) {
	std::cerr << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cerr << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	std::cerr << "AAnimal copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

void AAnimal::makeSound() const {
	std::cout << "Unknown sound" << std::endl;
}

std::string AAnimal::getType() const {
	return (_type);
}

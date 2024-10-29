#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal("Dog") {
	std::cerr << "Default WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal(other) {
	std::cerr << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog() {
	std::cerr << "WrongDog destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &rhs) {
	std::cerr << "WrongDog copy assignement operator called" << std::endl;
	WrongAnimal::operator=(rhs);
	return (*this);
}

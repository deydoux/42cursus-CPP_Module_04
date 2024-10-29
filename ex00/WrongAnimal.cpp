#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Unknown") {
	std::cerr << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {
	std::cerr << _type << " WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type) {
	std::cerr << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cerr << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cerr << "WrongAnimal copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "dnuos nwonknU" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}

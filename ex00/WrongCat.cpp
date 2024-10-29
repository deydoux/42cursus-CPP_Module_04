#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat") {
	std::cerr << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other) {
	std::cerr << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cerr << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	std::cerr << "WrongCat copy assignement operator called" << std::endl;
	WrongAnimal::operator=(rhs);
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "!woeM" << std::endl;
}

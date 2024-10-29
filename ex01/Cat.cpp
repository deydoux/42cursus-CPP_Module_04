#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain()) {
	std::cerr << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other), _brain(new Brain(*other._brain)) {
	std::cerr << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cerr << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cerr << "Cat copy assignement operator called" << std::endl;
	_type = rhs._type;
	_brain = rhs._brain;
	return (*this);
}

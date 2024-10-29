#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain()) {
	std::cerr << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other), _brain(new Brain(*other._brain)) {
	std::cerr << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cerr << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cerr << "Dog copy assignement operator called" << std::endl;
	_type = rhs._type;
	_brain = rhs._brain;
	return (*this);
}

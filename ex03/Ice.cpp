#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
	std::cerr << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &) {
	std::cerr << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cerr << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &) {
	std::cerr << "Ice copy assignement operator called" << std::endl;
	return (*this);
}

AMateria *Ice::clone() const {
	return (new Ice);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

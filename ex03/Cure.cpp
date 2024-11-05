#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cerr << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other) {
	std::cerr << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cerr << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &) {
	std::cerr << "Cure copy assignement operator called" << std::endl;
	return (*this);
}

AMateria *Cure::clone() const {
	return (new Cure);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

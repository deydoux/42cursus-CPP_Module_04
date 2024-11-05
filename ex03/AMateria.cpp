#include "AMateria.hpp"

AMateria::AMateria(): _type("Undefined") {
	std::cerr << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type): _type(type) {
	std::cerr << _type << " AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other): _type(other._type) {
	std::cerr << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cerr << _type << " AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs) {
	std::cerr << "AMateria copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

const std::string &AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter &) {}

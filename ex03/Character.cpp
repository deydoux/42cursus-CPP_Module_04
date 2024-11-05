#include "Character.hpp"

Character::Character(): _inventory(), _name("Unamed") {
	std::cerr << "Default Character constructor called" << std::endl;

}

Character::Character(const std::string &name): _inventory(), _name(name) {
	std::cerr << _name << " Character constructor called" << std::endl;
}

Character::Character(const Character &other) {
	std::cerr << "Character copy constructor called" << std::endl;
	*this = other;
}

Character::~Character() {
	std::cerr << "Character destructor called" << std::endl;
}

Character &Character::operator=(const Character &rhs) {
	std::cerr << "Character copy assignement operator called" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		delete _inventory[i];
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_name = rhs._name;
	return (*this);
}

const std::string &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria *m) {
	// TODO
	(void)m;
}

void Character::unequip(int idx) {
	// TODO
	(void)idx;
}

void Character::use(int idx, ICharacter &target) {
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

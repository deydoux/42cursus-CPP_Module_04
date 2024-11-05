#include "Character.hpp"

Character::Character(): _inventory(), _name("Unamed") {
	std::cerr << "Default Character constructor called" << std::endl;

}

Character::Character(const std::string &name): _inventory(), _name(name) {
	std::cerr << _name << " Character constructor called" << std::endl;
}

Character::Character(const Character &other): _inventory() {
	std::cerr << "Character copy constructor called" << std::endl;
	*this = other;
}

Character::~Character() {
	std::cerr << "Character destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		delete _inventory[i];
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

void Character::equip(AMateria *materia) {
	if (!materia) {
		std::cout << _name << " Character can't equip unknown materia" << std::endl;
		return ;
	}
	for (size_t i = 0; i < 4; i++)
		if (!_inventory[i]) {
			std::cout << _name << " Character equiped " << materia->getType() << " at " << i << " inventory slot" << std::endl;
			_inventory[i] = materia;
			return ;
		}
	std::cout << "Can't equip " << materia->getType() << ", " << _name << " Character inventory is full" << std::endl;
}

void Character::unequip(int index) {
	if (0 > index || index > 4) {
		std::cout << "Invalid Character inventory slot" << std::endl;
		return ;
	}
	if (!_inventory[index]) {
		std::cout << _name << " Character " << index << " inventory slot is empty" << std::endl;
		return ;
	}
	_unequiped.push(_inventory[index]);
	std::cout << _name << " Character unequipped " << _inventory[index]->getType() << " at " << index << " inventory slot" << std::endl;
	_inventory[index] = NULL;
}

void Character::use(int index, ICharacter &target) {
	if (_inventory[index])
		_inventory[index]->use(target);
}

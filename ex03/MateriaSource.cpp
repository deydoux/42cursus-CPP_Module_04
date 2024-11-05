#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _inventory(), _size(0) {
	std::cerr << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other): _inventory() {
	std::cerr << "MateriaSource copy constructor called" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource() {
	std::cerr << "MateriaSource destructor called" << std::endl;
	for (size_t i = 0; i < _size; i++)
		delete _inventory[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	std::cerr << "MateriaSource copy assignement operator called" << std::endl;
	for (size_t i = 0; i < 4; i++) {
		delete _inventory[i];
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_size = rhs._size;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (_size >= 4) {
		std::cout << "MateriaSource can't learn new Materia" << std::endl;
		return ;
	}
	std::cout << "MateriaSource learned " << materia->getType() << std::endl;
	_inventory[_size++] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (size_t i = 0; i < _size; i++)
		if (_inventory[i] && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	return (NULL);
}

#include "MateriaList.hpp"

MateriaList::MateriaList(): _element(), _next() {
	std::cerr << "Default MateriaList constructor called" << std::endl;
}

MateriaList::MateriaList(AMateria *element): _element(element), _next() {
	std::cerr << "Parametric MateriaList constructor called" << std::endl;
}

MateriaList::MateriaList(const MateriaList &other): _element(other._element), _next(other._next) {
	std::cerr << "MateriaList copy constructor called" << std::endl;
}

MateriaList::~MateriaList() {
	std::cerr << "MateriaList destructor called" << std::endl;
	delete _element;
	delete _next;
}

MateriaList &MateriaList::operator=(const MateriaList &rhs) {
	std::cerr << "MateriaList copy assignement operator called" << std::endl;
	_element = rhs._element;
	_next = rhs._next;
	return (*this);
}

void MateriaList::push(AMateria *element) {
	if (!_element)
		_element = element;
	else if (!_next)
		_next = new MateriaList(element);
	else
		_next->push(element);
}

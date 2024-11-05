#include "MateriaList.hpp"

MateriaList::MateriaList(): _element(), _next() {
	std::cerr << "Default MateriaList constructor called" << std::endl;
}

MateriaList::MateriaList(AMateria *element): _element(element), _next() {
	std::cerr << "Parametric MateriaList constructor called" << std::endl;
}

MateriaList::MateriaList(const MateriaList &other) {
	std::cerr << "MateriaList copy constructor called" << std::endl;
	*this = other;
}

MateriaList::~MateriaList() {
	std::cerr << "MateriaList destructor called" << std::endl;
	delete _element;
	delete _next;
}

MateriaList &MateriaList::operator=(const MateriaList &rhs) {
	std::cerr << "MateriaList copy assignement operator called" << std::endl;
	if (rhs._element)
		_element = rhs._element->clone();
	else
		_element = NULL;
	delete _next;
	if (rhs._next)
		*_next = *rhs._next;
	else
		_next = NULL;
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

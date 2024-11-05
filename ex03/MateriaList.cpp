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
	this->~MateriaList();
	_element = NULL;
	_next = NULL;
	MateriaList *tmp = (MateriaList *)&rhs;
	while (tmp && tmp->_element)
	{
		push(tmp->_element->clone());
		tmp = tmp->_next;
	}
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

#ifndef MATERIALIST_HPP
#define MATERIALIST_HPP

#include "AMateria.hpp"

class MateriaList {
private:
	AMateria *_element;
	MateriaList *_next;
public:
	MateriaList();
	MateriaList(AMateria *element);
	MateriaList(const MateriaList &other);
	~MateriaList();
	MateriaList &operator=(const MateriaList &rhs);
	void push(AMateria *element);
};

#endif

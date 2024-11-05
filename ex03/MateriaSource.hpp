#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria *_inventory[4];
	size_t _size;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &rhs);
	void learnMateria(AMateria *materia);
	AMateria* createMateria(const std::string &type);
};

#endif

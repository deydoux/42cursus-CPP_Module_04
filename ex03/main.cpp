#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void) {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria *tmp = new Ice;
	src->learnMateria(tmp);
	delete tmp;

	tmp = new Cure;
	src->learnMateria(tmp);
	delete tmp;

	ICharacter *me = new Character("me");
	ICharacter *bob = new Character("bob");

	for (int i = -1; i <= 4; i++) {
		me->use(i, *bob);
		me->unequip(i);
	}

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("something"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("something"));

	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("something");
	me->equip(tmp);
	delete tmp;

	for (int i = -1; i <= 4; i++) {
		me->use(i, *bob);
		me->unequip(i);
	}

	for (int i = -1; i <= 4; i++) {
		me->use(i, *bob);
		me->unequip(i);
	}

	delete src;
	delete me;
	delete bob;
}
